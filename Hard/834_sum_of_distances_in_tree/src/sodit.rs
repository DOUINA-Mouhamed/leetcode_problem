// struct Solution;

// impl Solution {
    pub fn sum_of_distances_in_tree(n: i32, edges: Vec<Vec<i32>>) -> Vec<i32> {
        let n = n as usize;
        let mut graph = vec![Vec::new(); n];
        let mut res = vec![0; n];
        let mut count = vec![1; n];

        /* Build the graph */
        for edge in edges {
            graph[edge[0] as usize].push(edge[1] as usize);
            graph[edge[1] as usize].push(edge[0] as usize);
        }

        /* First DFS to calculate initial res[0] and count of each subtree */
        fn dfs(node: usize, parent: usize, graph: &Vec<Vec<usize>>, res: &mut Vec<i32>, count: &mut Vec<i32>) {
            for &neigh in &graph[node] {
                if neigh == parent {
                    continue;
                }
                dfs(neigh, node, graph, res, count);
                count[node] += count[neigh];
                res[node] += res[neigh] + count[neigh];
            }
        }

        /* Second DFS to adjust res based on its parent data */
        fn dfs2(node: usize, parent: usize, graph: &Vec<Vec<usize>>, res: &mut Vec<i32>, count: &Vec<i32>, n: usize) {
            for &neigh in &graph[node] {
                if neigh == parent {
                    continue;
                }
                /* Moving the root from node to neigh */
                res[neigh] = res[node] - count[neigh] + (n as i32 - count[neigh]);
                dfs2(neigh, node, graph, res, count, n);
            }
        }

        /* Execute DFS from node 0 */
        dfs(0, usize::MAX, &graph, &mut res, &mut count);
        dfs2(0, usize::MAX, &graph, &mut res, &count, n);

        res
    }
// }

mod sodit;
use crate::sodit::sum_of_distances_in_tree;

/* Main function to test cases */
fn main()
{
    let n = 6;
    let edges = vec![vec![0, 1], vec![0, 2], vec![2, 3], vec![2, 4], vec![2, 5]];
    let result = sum_of_distances_in_tree(n, edges);
    println!("{:?}", result);
}

use std::collections::HashMap;

struct Solution;

impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut map = HashMap::new();
        for (i, &value) in nums.iter().enumerate() {
            let complement = target - value;
            if map.contains_key(&complement) {
                return vec![*map.get(&complement).unwrap() as i32, i as i32];
            }
            map.insert(value, i);
        }
        vec![]
    }
}

fn main() {
    let nums = vec![2, 7, 11, 15];
    let target = 9;
    let result = Solution::two_sum(nums, target);
    println!("{:?}", result);

    let nums = vec![3, 2, 4];
    let target = 6;
    let result = Solution::two_sum(nums, target);
    println!("{:?}", result);

    let nums = vec![3, 3];
    let target = 6;
    let result = Solution::two_sum(nums, target);
    println!("{:?}", result);
}
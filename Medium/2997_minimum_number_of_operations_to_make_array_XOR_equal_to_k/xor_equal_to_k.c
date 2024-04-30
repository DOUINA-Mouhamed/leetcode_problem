/* Function to count the number of set bits in an integer */
int countSetBits(int n)
{
    int count = 0;

    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

/* Function to find the minimum number of operations required */
int minOperations(int* nums, int numsSize, int k)
{
    int xorNums = 0;
    int xorK;

    for (int i = 0; i < numsSize; i++) {
        xorNums ^= nums[i];
    }
    xorK = xorNums ^ k;
    if (xorK == 0) {
        return 0;
    } else {
        return countSetBits(xorK);
    }
}

/* Main function */
int main(void)
{
    int nums[] = {2, 1, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int k = 1;

    printf("Minimum operations: %d\n", minOperations(nums, numsSize, k));
    return 0;
}

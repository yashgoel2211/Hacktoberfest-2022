# Array for solving Twosum problem
# TwoSum is popular problem for code interview
def twoSum(self, nums: List[int], target: int) -> List[int]:
        ls = []
        for i in range(0, len(nums)):
            item = target - nums[i]
            nums[i] = "done"
            if item in nums:
                ls.append(i)
                ls.append(nums.index(item))
        return ls
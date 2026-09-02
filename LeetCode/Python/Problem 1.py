class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        num_to_index = {}

        for i in range(len(nums)):
            need = target - nums[i]

            if need in num_to_index:
                return [num_to_index[need], i]

            num_to_index[nums[i]] = i

        return []
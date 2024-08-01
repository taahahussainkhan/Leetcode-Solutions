class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        if target in nums:
            return nums.index(target)
        else:
            temp = nums
            temp.append(target)
            temp.sort()
            return temp.index(target)

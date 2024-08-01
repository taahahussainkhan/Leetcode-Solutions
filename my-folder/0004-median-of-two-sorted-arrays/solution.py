class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        merged = nums1 + nums2
        merged.sort()
        n = len(merged)
        
        if n % 2 == 0:
            mid = merged[n//2]
            mid1 = merged[n//2 - 1]
            return (mid + mid1) / 2.0
        else:
            return float(merged[n //2])

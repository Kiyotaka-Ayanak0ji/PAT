nums = [1,2,3,4]

nums.sort()

res = 0

for i in range(0,len(nums),2):
    res += nums[i]

print(res)
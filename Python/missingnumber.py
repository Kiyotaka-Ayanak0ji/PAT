def missing(nums):
    nums.sort()

    up = nums[-1]
    res = 0

    for i in range(0,up+1):
        res = (i)^nums[i]

        if(res != 0):
            return i

#drivercode
if __name__ == "__main__":
    nums = [9, 6, 4, 2, 3, 5, 7, 0, 1]
    print(missing(nums))
def binarySearch(nums, target):
    nums.sort()

    low = 0
    high = len(nums)
    mid = 0

    while low < high:
        mid = low + (high - low) // 2

        if nums[mid] < target:
            low = mid + 1

        if nums[mid] > target:
            high = mid - 1

        if nums[mid] == target:
            return mid

    return mid+1


if __name__ == "__main__":
    nums = [1, 3, 5, 6]
    target = 2

    print(binarySearch(nums, target))

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

    return False


def matrixSearch(matrix, target):
    rows = len(matrix[0])
    column = len(matrix)

    j = rows - 1
    i = 0

    while (i <= column-1):

        if (matrix[i][j] >= target):
            if (binarySearch(matrix[i], target)):
                return True

        i += 1

    return False


if __name__ == "__main__":
    matrix = [[1, 3, 5, 7], [10, 11, 16, 20], [23, 30, 34, 60]]
    target = 60
    print(matrixSearch(matrix, target))

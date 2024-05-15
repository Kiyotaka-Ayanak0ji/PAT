import collections

def isPossible(nums):
    q = collections.deque([[nums[0]]])

    for i in range(1,len(nums)):
        if q[-1][-1] == nums[i]:
            q.append([nums[i]])
            continue
        cur = q.pop()
        while nums[i] > cur[-1]+1:
            if len(cur) < 3:
                return False
            if len(q) > 0:
                cur = q.pop()
            else:
                cur = []
                break;
        cur.append(nums[i])
        q.appendleft(cur)
    while q:
        if len(q.pop()) < 3:
            return False
    return True

if __name__ == "__main__":
    nums = [1]
    print(isPossible(nums))
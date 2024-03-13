from collections import defaultdict
import heapq

d = defaultdict(int)

places = ["Gold Medalist","Silver Medalist","Bronze Medalist"]
ranks = [10, 3, 8, 9, 4]

n = len(ranks)

a = [" "]*n

for i in range(n):
    d[ranks[i]] = i
    ranks.sort(reverse=True)

for i in range(n):
    if n<3:
        a[d[ranks[i]]] = places[i]

    else:
        a[d[ranks[i]]] = str(i-1)

print(a)
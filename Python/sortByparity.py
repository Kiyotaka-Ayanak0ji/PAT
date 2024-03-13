nums = [int(_) for _ in (input().split(" "))];

n_odd = [i for i in nums if i%2 != 0];
n_even = [i for i in nums if i%2 == 0];

print(n_even+n_odd);
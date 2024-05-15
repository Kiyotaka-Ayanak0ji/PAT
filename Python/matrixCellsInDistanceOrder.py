rows = 2;
cols = 3;
rCenter = 1;
cCenter = 2;

cells = []
di = dict()

for i in range(rows):
    for j in range(cols):
        d = abs(i-rCenter)+abs(j-cCenter)
        di[d] = (i,j);

for i in di.keys():
    cells.append(di[i])

print(cells)




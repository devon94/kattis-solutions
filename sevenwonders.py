import sys

sum = 0
count = 0
min = sys.maxsize

d = dict()

for i in list(input()):
    if i in d:
        d[i] += 1
    else:
        d[i] = 1

for i in list(d.keys()):
    sum += d[i] ** 2
    if d[i] < min:
        min = d[i]
    count += 1

if count == 3:
    sum +=  7 * min

print(sum)
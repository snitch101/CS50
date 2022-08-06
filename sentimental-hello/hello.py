n = 3
b = (2, 3)
x = n
list = []

for i in range(n):
    x += 4
print(x)

for j in range(n, x + 1, 4):
    k = (x - j) / 2
    for k in range(b):
        list.append(" " * int(k) + "*" * j + " " * int(k))

print(list)
print(len(list))

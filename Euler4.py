numbers = range(100,1000)
revnumbers = []
for i in reversed(numbers):
    revnumbers.append(i)

multd = []
for i in revnumbers:
    for y in revnumbers:
        multd.append(i*y)

allpal = []

for i in multd:
    x = str(i)
    if x == x[::-1]:
        allpal.append(i)

allpal.sort()
allpal.reverse()
print allpal[0]

triangle = []
with open("triangle.txt") as f:
	for line in f:
		triangle.append(map(int, line.split()))
	triangle = [[int(i) for i in line.split()]
                     for line in f]
fo = open("triangle.txt", "r+")
for x in fo:
	if x != '\n':
		triangle.append((x.rstrip().split(" "))

total = 0
pos = 0
line = 0;

triangle.reverse()
maxSum = []
for i in triangle:
	if line == 0:
		maxSum.append(i)
print total

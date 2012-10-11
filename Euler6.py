natnums = range(1,101)

sumofsq = 0
for i in natnums:
    sumofsq += i*i

sqsum = 0
for i in natnums:
    sqsum += i

sqsum = sqsum*sqsum

print sumofsq-sqsum

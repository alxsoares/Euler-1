primes = [2,3,5,7,11,13]

i=13
tf = 0
while (len(primes) != 10001):
    i += 2
    for prime in primes:
        if i%prime == 0:
            tf = 0
            break
        else:
            tf = 1
    if tf == 1:
        primes.append(i)
        #print str(i) + " :: " + str(len(primes))

primes.reverse()
print primes[0]

primes = [2,3,5,7,11,13]

i=13
tf = 0
while (primes[-1] < 2000000):
  i += 2
  for prime in primes:
    if prime*prime < i:
      if i%prime == 0:
        tf = 0
        break
      else:
        tf = 1
  if tf == 1:
    primes.append(i)
    #print str(i) + " :: " + str(len(primes))

print primes[-1]
answer = sum(primes)-primes[-1]
print answer
print len(primes)

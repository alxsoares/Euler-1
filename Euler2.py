def fib(prev, curr):
    return prev + curr

def dofib():
    init = 0
    prev = 0
    init += 1
    allfib = []
    while 1:
        new = fib(prev, init)
        prev = init
        init = new
        if new > 4000000:
            break
        else:
            allfib.append(new)
    return allfib


allnum = dofib()
print allnum
total = 0
for n in allnum:
    if n%2 == 0:
        total += n

print total

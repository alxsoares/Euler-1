from math import *

for i in range(0,1000):
  for y in range(0,1000):
    if (i < y):
      c = sqrt((i*i) + (y*y))
      if c > y:
        if (i + y + c) == 1000:
          print i
          print y
          print c

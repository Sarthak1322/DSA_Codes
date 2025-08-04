"""
/*
       1
      23
     456
      
      print the above pattern*/
"""

n = int(input())
a =1
for i in range(n):
    for j in range(n):
        if(i+j >= n-1):
            print(a, end="")
            a += 1
        else:
            print(" ", end="")
    print()
"""
/*
     1
    121
   12321
  1234321
  print the above pattern*/

"""
n = int(input())

for i in range(n):
    a =1
    b=i
    for j in range(n):
        if(i+j >= n-1):
            print(a, end="")
            a += 1
        else:
            print(" ", end="")
    for j in range(n):
        if(i> j):
            print(b, end="")
            b -= 1
        else:
            print(" ", end="")
    print()
"""
/*
       1
      22
     333
      
      print the above pattern*/
"""
n = int(input())
for i in range(n):
    for j in range(n):
        if(i+j >= n-1):
            print(i+1, end="")
        else:
            print(" ", end="")
    print()
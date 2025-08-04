"""
/*
     1234554321
     1234**4321
     123****321
     12******21
     1********1
  print the above pattern*/

"""

n = 5
for i in range(n):
    # Ascending numbers from 1 to n-i
    for j in range(1, n - i + 1):
        print(j, end="")
    
    # Stars: 2 * i
    for k in range(2 * i):
        print("*", end="")
    
    # Descending numbers from n-i to 1
    for j in range(n - i, 0, -1):
        print(j, end="")
    
    print()

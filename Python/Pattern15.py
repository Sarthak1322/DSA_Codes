"""
/*
   A
   BC
   DEF
   print the above pattern*/


"""

print("Enter the number of rows: ")
n = int(input())
s = 'A'
for i in range(1, n+1):
    
    for j in range(i):
        print(s, end="")
        s = chr(ord(s) + 1)
        
    print()
    
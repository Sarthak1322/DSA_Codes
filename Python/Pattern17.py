"""
/*
   D
   CD
   BCD
   ABCD
   PRINT THE ABOVE PATTERN*/

"""
print("Enter the number of row: ")
n = int(input())
for i in range(n):
    s = chr(ord('A') + n-1 - i)
    for j in range(i + 1):
        print(chr(ord(s) + j), end="")
    print()
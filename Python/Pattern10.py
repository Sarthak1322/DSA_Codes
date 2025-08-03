"""
   AAA
   BBB
   CCC
   print the above pattern
"""
print("enter the number of rows")
n = int(input())
s = "A"
for i in range(n):
    for j in range(n):
        print(s, end="")
    print()
    s = chr(ord(s) + 1)

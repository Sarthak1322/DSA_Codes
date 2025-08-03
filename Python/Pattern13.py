"""
/*
   ABC
   BCD
   CDE
   print the above pattern*/

"""
print("Enter the number of rows: ")
n = int(input())
for i in range(n):
    ch = chr(ord('A') + i)  # Starting character for each row
    for j in range(n):
        print(ch, end="")
        ch = chr(ord(ch) + 1)  # Move to next character
    print()

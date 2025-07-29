"""
    1234
    1234
    1234
    1234
    print the above pattern

"""

print("Enter the number: ")
n = int(input())
for i in range(n):
    for j in range(n):
        print(j + 1 , end="")
    print()
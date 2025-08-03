"""
    *
    **
    ***
    ****
    print the above pattern


"""

print("Enter the number:")
n = int(input())
for i in range(n):
    for j in range(i+1):
        print("*", end="")
    print()


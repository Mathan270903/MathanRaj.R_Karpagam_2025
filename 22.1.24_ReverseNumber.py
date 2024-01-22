
# Given a number N reverse the number and print it.

# Example 1: Input: N = 123 Output: 321 Explanation: The reverse of 123 is 321

# Example 2: Input: N = 234 Output: 432 Explanation: The reverse of 234 is 432

# Input Format

# 123

# Constraints

# N <= 1000

# Output Format

# 321

# Sample Input 0

# 123
# Sample Output 0

# 321


# First Method

# s = input()
# print(s[::-1])


# Second Method


# a = int(input());s=''

# while a>0:
#     s += str(a%10)
#     a//=10
# print(s)
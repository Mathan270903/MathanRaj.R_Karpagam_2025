# Task
# Given an integer, N, perform the following conditional actions:

# If N is odd, print Weird
# If N is even and in the inclusive range of 2 to 5, print Not Weird
# If N is even and in the inclusive range of 6 to 20, print Weird
# If N is even and greater than 20, print Not Weird
# Input Format

# A single line containing a positive integer, n.

# Constraints

# 1 <= n <= 100

# Output Format

# Print Weird if the number is weird. Otherwise, print Not Weird.

# Sample Input 0

# 3
# Sample Output 0

# Weird







# First Method

#!/bin/python3

# import math
# import os
# import random
# import re
# import sys



# if __name__ == '__main__':
#     n = int(input())
    
#     if n % 2 != 0:
#         print("Weird")
        
#     elif n % 2 == 0 and n >= 2 and n <= 5:
#         print("Not Weird")
        
#     elif n % 2 == 0 and n >= 6 and n <= 20:
#         print("Weird")
        
#     else:
#         print("Not Weird")



# Second Method


#!/bin/python3

# import math
# import os
# import random
# import re
# import sys



# if __name__ == '__main__':
#     n = int(input())
    
#     print("Weird" if n % 2 != 0 else "Not Weird" if n % 2 == 0 and n >= 2 and n <= 5 else "Weird" if n % 2 == 0 and n >= 6 and n <= 20 else "Not Weird")

import math
import os
import random
import re
import sys

def dynamicArray(n, queries):
    # Write your code here
    seq=[[]for i in range(n)]
    lastanswer = 0
    result = []
    for q,x,y in queries:
        if q==1:
            idx = (x ^ lastanswer)%n
            seq[idx].append(y)
        else:
            idx = (x ^ lastanswer)%n
            v = y % len(seq[idx])
            lastanswer = seq[idx][v]
            result.append(lastanswer)
    return result

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    first_multiple_input = input().rstrip().split()
    n = int(first_multiple_input[0])
    q = int(first_multiple_input[1])
    queries = []
    for _ in range(q):
        queries.append(list(map(int, input().rstrip().split())))
    result = dynamicArray(n, queries)
    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')
    fptr.close()

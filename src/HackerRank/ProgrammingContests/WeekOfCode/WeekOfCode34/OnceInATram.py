#!/bin/python3
import sys


def isequal(x):
    t = 0;
    lt = 0;
    h = 0;
    for g in range(3):
        lt = x % 10;
        t += lt;
        x = int(x / 10);
    for g in range(3):
        lt = x % 10;
        h += lt;
        x = int(x / 10);
    if (t == h):
        return True;
    else:
        return False;


x = int(input());
x += 1;
for y in range(1001):
    if (isequal(x)):
        print(x);
        break;
    else:
        x += 1;

#!/usr/bin/python3
for digit1st in range(0, 10):
    for digit2nd in range(digit1st +1, 10):
        if digit1st == 8 and digit2nd == 9:
            print("{}{}".format(digit1st, digit2nd))
        else:
            print("{}{}".format(digit1st, digit2nd), end=", ")

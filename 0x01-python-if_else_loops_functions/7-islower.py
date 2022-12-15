#!/usr/bin/python3
def islower(c):
    """This function checks for any lowercase characters."""
    if ord(c) >= 97 and ord(c) <= 122:
        return True
    else:
        return False

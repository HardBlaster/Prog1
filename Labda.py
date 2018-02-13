import sys
from time import sleep
import os
x, y = 1, 1
xk, yk= x, y
row = 80
col = 26
def print_there(x, y, text):
    sys.stdout.write("\x1b7\x1b[%d;%df%s\x1b8" % (x, y, text))
    sys.stdout.flush()
while True:
    x = x + (-1)**((xk - 1)/(row - 3))
    y = y + (-1)**((yk - 1)/(col - 3))

    xk = xk + 1
    yk = yk + 1

    for i in range(1, 80):
	print_there(1, i, "-")
	print_there(24, i, "-")
    print_there(y, x, "X")
    sleep(0.1)
    os.system('cls||clear')

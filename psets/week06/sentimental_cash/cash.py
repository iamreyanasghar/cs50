from cs50 import get_float

r = 0
while True:
    n = get_float("Change: ")
    if n > 0:
        break

n = n * 100

while n >= 25:
    n = n - 25
    r += 1

while n >= 10:
    n = n - 10
    r += 1

while n >= 5:
    n = n - 5
    r += 1

while n > 0:
    n = n - 1
    r += 1

print(r)

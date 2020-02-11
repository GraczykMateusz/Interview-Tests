fib = [0,1]
limit = int(input("How many Fibonacci numbers:"))

while limit > len(fib):
    fib.append(fib[-1] + fib[-2])

if limit <= 0:
    print("Input positive number!")
elif limit==1:
    print(fib[0])
elif limit==2:
    print(fib[0:2])
else:
    print(fib)
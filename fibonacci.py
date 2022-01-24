def fibonacci(n):
    a = 0
    b = 1
    if n < 0:
        print("Incorrect input")

    elif n <= len(FibArray):
        return FibArray[n - 1]
    else:
        temp_fib = fibonacci(n-1)+fibonacci(n-2)
        FibArray.append(temp_fib)
        return temp_fib

    print(fibonacci(2))

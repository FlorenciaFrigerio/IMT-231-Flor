def generar_fibonacci_inverso(n):
    fib = [0, 1]
    for i in range(2, n):
        fib.append(fib[-1] + fib[-2])
    print(", ".join(str(x) for x in reversed(fib[:n])))

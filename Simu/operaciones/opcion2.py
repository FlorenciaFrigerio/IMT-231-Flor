def imprimir_piramide(n):
    for i in range(n):
        espacios = ' ' * (n - i - 1)
        asteriscos = '*' * (2 * i + 1)
        print(espacios + asteriscos)

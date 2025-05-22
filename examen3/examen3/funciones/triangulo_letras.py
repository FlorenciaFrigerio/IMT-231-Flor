def generar_triangulo(n):
    for i in range(1, n + 1):
        linea = [chr(64 + j) for j in range(1, i + 1)]
        print(' '.join(linea))

def calcular_suma_divisores(n):
    suma = 0
    for i in range(1, n):
        if n % i == 0:
            suma += i
    return suma
    if n <= 0:
        print("El número debe ser mayor que cero.")
        return
    suma = sum(i for i in range(1, n) if n % i == 0)
    print(f"La suma de los divisores propios de {n} es: {suma}")
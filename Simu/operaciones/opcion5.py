def es_palindromo(n):
    if n <= 0:
        print("El número debe ser positivo.")
        return

    cadena = str(n)
    longitud = len(cadena)
    es_capicua = True

    for i in range(longitud // 2):
        if cadena[i] != cadena[longitud - 1 - i]:
            es_capicua = False
            break

    if es_capicua:
        print(f"{n} es un número capicúa.")
    else:
        print(f"{n} no es capicúa.")

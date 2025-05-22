def contar_divisibles_o_terminan_en_3(n):
    contador = 0
    for i in range(1, n+1):
        if i % 3 == 0 or str(i).endswith("3"):
            contador += 1
    print(f"Cantidad de números entre 1 y {n} que cumplen: {contador}")

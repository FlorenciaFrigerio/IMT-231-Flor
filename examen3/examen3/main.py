from funciones import divisores, triangulo_letras, primos, fibonacci_inverso

def menu():
    while True:
        print("\n MENÚ DE FUNCIONES ")
        print("1. Suma de divisores propios")
        print("2. Triángulo de letras del alfabeto")
        print("3. Primeros N números primos")
        print("4. Serie de Fibonacci inversa")
        print("5. Salir")
        opcion = input("Seleccione una opción: ")

        if opcion == '1':
            n = int(input("Ingrese un número entero positivo: "))
            print("Suma de divisores propios:", divisores.calcular_suma_divisores(n))

        elif opcion == '2':
            n = int(input("Ingrese la altura del triángulo: "))
            triangulo_letras.generar_triangulo(n)
        elif opcion == '3':
            n = int(input("¿Cuántos números primos mostrar?: "))
            primos.mostrar_primos(n)
        elif opcion == '4':
            n = int(input("Ingrese la cantidad de términos de la serie: "))
            fibonacci_inverso.generar_fibonacci_inverso(n)
        elif opcion == '5':
            print("xao xao")
            break
        else:
            print("Opción inválida. Intente de nuevo.")

menu()

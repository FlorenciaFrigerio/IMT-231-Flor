from operaciones import opcion1, opcion2, opcion3, opcion4, opcion5

def menu():
    while True:
        print("\n----- MENÚ DE OPCIONES -----")
        print("1. Contar divisibles por 3 o terminan en 3")
        print("2. Imprimir pirámide de asteriscos")
        print("3. Serie 1, -2, 3, -4, ...")
        print("4. Contar números primos")
        print("5. Verificar número capicúa")
        print("6. Salir del programa")

        opcion = input("Seleccione una opción: ")
        
        if opcion == "1":
            n = int(input("Ingrese un número N: "))
            opcion1.contar_divisibles_o_terminan_en_3(n)
        elif opcion == "2":
            n = int(input("Ingrese la altura N: "))
            opcion2.piramide(n)
        elif opcion == "3":
            n = int(input("Ingrese la cantidad de términos: "))
            opcion3.serie_alternada(n)
        elif opcion == "4":
            n = int(input("Ingrese un número N: "))
            opcion4.contar_primos(n)
        elif opcion == "5":
            n = int(input("Ingrese un número positivo: "))
            opcion5.es_palindromo(n)
        elif opcion == "6":
            print("¡Hasta luego!")
            break
        else:
            print("Opción inválida. Intente de nuevo.")

menu()

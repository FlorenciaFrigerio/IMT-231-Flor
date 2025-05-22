def mostrar_primos(n):
    def es_primo(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    contador = 0
    numero = 2
    while contador < n:
        if es_primo(numero):
            print(numero)
            contador += 1
        numero += 1
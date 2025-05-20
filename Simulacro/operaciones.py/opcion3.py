def serie_alternada(n):
    serie = []
    for i in range(1, n+1):
        if i % 2 == 0:
            serie.append(str(-i))
        else:
            serie.append(str(i))
    print(", ".join(serie))

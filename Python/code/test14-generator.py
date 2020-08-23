def topTens():
    n = 1
    while(n <= 10):
        sq = n * n
        yield sq
        n += 1

values = topTens()

for value in values:
    print(value)
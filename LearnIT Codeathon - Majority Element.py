def takeSecond(elem):
    return elem[1]


n = input()
A = list(map(int, n.split()))

set_A = set(A)
app = []
for i in set_A:
    app.append((i, A.count(i)))

app.sort(key=takeSecond, reverse=True)
for x, count in app:
    if count >= len(A) // 2:
        print(x)
        break

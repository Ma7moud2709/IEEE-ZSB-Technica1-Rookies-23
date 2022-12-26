n = int(input())
string = list()

for i in range(n):
    string.append(input())
menu = {}
for i in string:
    x = "".join(sorted(i))
    if x in menu:
        menu[x].append(i)
    else:
        menu[x] = [i]
print(list(menu.values()))

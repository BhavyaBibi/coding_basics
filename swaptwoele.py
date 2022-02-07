# def swapPositions(a, b, l):
#     temp = l[a]
#     l[a] = l[b]
#     l[b] = temp

def swapPositions(a, b, l):
    l[a], l[b] = l[b], l[a]


list = [23, 65, 19, 90]
swapPositions(0, 2, list)
print(list)

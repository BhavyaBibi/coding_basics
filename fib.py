from re import X


def swaplist(list):
    list[0], list[-1] = list[-1], list[0]
    return list

newList = [12, 35, 9, 56, 24]
print(swaplist(newList))  
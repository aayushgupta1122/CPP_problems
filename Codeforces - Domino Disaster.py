case = int(input())
while case>0:
    col = int(input())
    str = input()
    if "U" in str:
        print(str.replace("U", "D"))
    elif "D" in str:
        print(str.replace("D", "U"))
    else:
        print(str)
    case-=1

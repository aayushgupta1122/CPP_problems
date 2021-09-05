def timer(hr,mi):
    hour = 23
    minutes = 60
    res_hr = hour - hr
    res_mi = minutes - mi
    result = res_hr * 60 + res_mi
    return result


t = int(input())
while t > 0:
    hr, mi = input().split()
    hr, mi = int(hr), int(mi)
    ##mi = int(input())

    print(timer(hr, mi))
    t -= 1

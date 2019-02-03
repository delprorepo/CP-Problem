n = int(input())
for i in range (0,n):
    x = int(input())
    if (x<2):
        print("Kasus #", i+1, ": Tidak ada kabel!", sep='')
    else:
        ans = int((x*(x-1))/2)
        print("Kasus #", i+1, ": ", ans, " kabel", sep='')
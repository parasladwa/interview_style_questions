


def sockMerchant(n, ar):
    
    ar.sort()
    print(ar)
    count = 0
    i = 0
    
    while i+1< n:
        
        if ar[i] == ar[i+1]:
            count+=1
            i+=2
        else:
            i+=1
    print(count)
    return count


n = 9
ar = [10, 20, 20, 10, 10, 30, 50, 10, 20]
sockMerchant(n, ar)
















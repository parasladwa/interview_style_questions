'''--------warm up----------'''


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



def repeatedString(s, n):
    count=0
    
    if "a" not in s:
        return 0
    
    
    for char in s:
        if char =="a":
            count+=1

    count *= (n//len(s))
    
    for i in range(0, n % len(s)):
        if s[i] == 'a':
            count+=1
    return count

print(repeatedString('aba', 10))




'''--------arrays----------'''

    
def hourglassSum(arr):
    
    
    hourglass =  lambda i, j : arr[i][j] + arr[i][j+1] + arr[i][j+2] + 
    arr[i+1][j+1] +
    arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]
                           
    tot = 0  
    
    for i in range(0, 4):
        for j in range(0, 4):
            tot += hourglass(i, j)
            print(tot)



hourglassSum()







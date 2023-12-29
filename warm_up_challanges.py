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






'''--------arrays----------'''

    
def hourglassSum(arr):

    def each_hourglass(i, j):
        first = arr[i][j] + arr[i][j+1] + arr[i][j+2]
        second =          + arr[i+1][j+1]
        third = arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]
        
        return first+second+third
    
    biggest = float('-inf')
    for i in range(0, 4):
        for j in range(0, 4):
            temp = each_hourglass(i, j)
            if temp > biggest:
                biggest = temp
    return biggest
        


def minimumBribes(q):
    

    new = q[:]
    new.sort()
    
    bribes = [0]*len(q)
    while q!= new:
        
        for i in range(0, len(q)-1):
            
            if q[i] == q[i+1]:
                continue
            
            elif q[i] < q[i+1]:
                continue
            
            else:
                bribes[q[i]-1] += 1 
                q[i], q[i+1] = q[i+1], q[i]
    
    chaos = False
    for i in bribes:
        if i  > 2:
            print("Too chaotic")
            chaos = True
    if chaos == False:
        print(sum(bribes))









def minimumSwaps(arr):
    count =0 

    for i, v in enumerate(arr):
        
        
        if i+1!= v:
            
            
            correct = arr.index(i+1)
            
            arr[i], arr[correct] = arr[correct], arr[i]
            count+=1
    return count












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






#correct but can be optimised
def arrayManipulation_slow(n, queries):
    
    arr = [0]*n
    
    
    for q in queries:

        for i in range(q[0]-1, q[1]):
            arr[i] += q[2]
    return max(arr)


    
    
    
    
    
def reverseWords(s):
    s=  s.split()
    print(s)
    new = []

    for word in s:
        new.insert(0, word)
    print(new)



#dictionary
def checkMagazine(magazine, note):
    words = dict()
    
    for word in magazine:
        words[word] = words.get(word, 0) + 1
    print(words)
    
def sherlockAndAnagrams(s):
    for i in range(0, len(s)):
        for j in range(i+1, len(s)):
            temp = s[i:j]
            





#misc





def flippingBits(n):
    total = 0
    binary = '{:032b}'.format(n)

    
    for i, v in enumerate(reversed(binary)):
        print(i, v)
        
        if int(v) == 0:
            total += 2**i

    return total


def primality(n):
    import math

    if int(n) == 1:
        return "Not prime"
        
    if n in [2,3,5,7,13]:
        return "Prime"
    
    end = int(str(n)[-1])
    if end%2==0 or end==0 or end==5:
        return "Not prime"
    
    for i in range(3, math.ceil(n**0.5)+1):
        if n%i==0:
            return "Not prime"
        
    return "Prime"







#codewars
def descending_order(nums):
    
    s = list(str(nums))
    
    s.sort(reverse = True)
    return int(''.join(s))



# print(descending_order(25132))



def timeConversion(s):
    
    if s[-2] == 'A':
        return s[:-2]

    else:
        num = int(s[:2])+12
        new = str(num)+ s[2:-2]
        return new


s = '07:05:45PM'
print(timeConversion(s))

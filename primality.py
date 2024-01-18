

def primality(n):
        import math

        if n == 1:
            return "Not prime"

        if n in [2, 3, 5, 7]:
            return "Prime"

        for i in range(3, math.ceil(n**0.5)+1):
            if n%i ==0:
                return "Not prime"

        return "Prime"
n = int(input(" ada "))
print(primality(n))


# Program to reverse a number

def reverse(val):
    result  = 0
    while(val > 0):
        result =  (result * 10) + val%10
        val = val//10
    return result

#print(reverse(25))

# program to find armstrong number

def is_armstrong(num):
    temp = num
    result = 0
    while(num > 0):
        val = num%10
        result += (val * val * val)
        num = num//10
    if (result == temp):
        return True
    else:
        return False

#print(is_armstrong(371))
#print(is_armstrong(100))

# program to find prime number

def is_prime(num):
    flag = 0
    for i in range(2,num//2):
        if (num%i == 0):
            flag = 1
            break
        else:
            flag = 0
    if(flag ==1):
        return True
    
#print(is_prime(19))
#print(is_prime(18))

def fibanocci(num):
    first = 0
    second = 1
    result = 0
    for i in range(0,num):
        if(i < 1):
            result = i
        else:
            result = first + second
            first = second
            second = result
        print(result)

#fibanocci(5) 
    n0 = 0
    n1 = 1
    result = 0
def rec_fibanocci(val):

    if(val > 0):
        for i in range(val):
            result = n0 + n1
            n0 = n1
            n1 = result
            print(result)
            rec_fibanocci(val-1)
  
value = 5
#print(rec_fibanocci(value))

# program to find factorial

def factorial(num):
    result = 1
    for i in range(1,num):
        if(i == 1):
            result = num
        else:
            result *= (num -1) 
            num = num -1
    return result

#print(factorial(6))

result = 1
def rec_factorial(num):
    if(num == 1):
        return 1
    else:
        return(num * rec_factorial(num-1))


num = 5
#for i in range (2,num): 
#    print(rec_factorial(num))

def is_palindrome(value):
    mod = 0
    sum = 0
    temp = value
    while value > 0:
        mod = value%10
        sum = (sum * 10) + mod
        value = value//10
    if (sum == temp):
        return True
    else:
        return False

#print(is_palindrome(121))
#print(is_palindrome(525))

def rec_palindrome(value):
    while(value > 0):
        return (str(value%10) + str(rec_palindrome(value//10)))

#print(rec_palindrome(1212))

z = "stuff"

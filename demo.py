
string = "I love Universe"



def printstring(str):
    try:
        for letter in str[0:3]:
            print(letter)
    except: 
        print("Invalid input")

print(printstring("Good days"))
print(printstring(10))
print(string.lower())
print(string.casefold())
print(string.count("e",1,8))

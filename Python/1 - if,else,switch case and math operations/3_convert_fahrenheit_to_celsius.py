def main():
    
    f = float(input('Enter the temperature in fahrenheit: '))
    c = (f-32)*5/9
    print("The temperature in celsius is " + str(round(c,2)))
    
main()
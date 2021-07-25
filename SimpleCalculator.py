for i in range(0,100):
    num1=int(input("Please Enter your 1st Number : "))
    num2=int(input("Please Enter your 2nd Number : "))

    print ("Operator Menu")
    print ("1. +")
    print ("2. -")
    print ("3. *")
    print ("4. /")
    
    choice=int(input("Enter your choice (1-4) : "))
    
    if choice==1:
        print(num1+num2)
        
    elif choice==2:
        print(num1-num2)
       
    elif choice==3:
        print(num1*num2)
        
    elif choice==4:
        print(num1/num2)
  
    else:
        print("WRONG CHOICE")
   
    ch=str(input("Want to continue (y/n)? : "))
    if ch!="y" and ch!="Y":
        break


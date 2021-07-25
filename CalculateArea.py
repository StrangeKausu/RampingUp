for i in range(0,100):

    print ("Area Menu");
    print ("1.Square");
    print ("2.Rectangle");
    print ("3.Triangle");
    print ("4.Circle");
    a=int(input("Please Enter your Choice (1-4) : "))
    
    if a==1:
        side=int(input("Enter a side of a Square : "))
        print(side*side)
        ch=str(input("Want to continue (y/n)? : "))
        if ch!="y" and ch!="Y":
            break
          
    elif a==2:
        length=int(input("Enter the length of the Rectangle : "))
        breadth=int(input("Enter the breadth of the Rectangle : "))
        print(length*breadth)
        ch=str(input("Want to continue (y/n)? : "))
        if ch!="y" and ch!="Y":
            break
       
    elif a==3:
        base=int(input("Enter the base of the Triangle : "))
        height=int(input("Enter the heigth of the Triangle : "))
        print(base*height/2)
        ch=str(input("Want to continue (y/n)? : "))
        if ch!="y" and ch!="Y":
            break
        
    elif a==4:
        radius=int(input("Enter the radius of the Circle : "))
        print((22*radius*radius)/7)
        ch=str(input("Want to continue (y/n)? : "))
        if ch!="y" and ch!="Y":
            break
    
    else:
        print("WRONG CHOICE")
        ch=str(input("Want to continue (y/n)? : "))
        if ch!="y" and ch!="Y":
            break
     
    

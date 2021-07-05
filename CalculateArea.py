for i in range(0,100):
    a=int(input("Press 1 for Square Area , 2 for Rectangle Area , 3 for Triangle Area and 4 for Circle Area : "))
    if a>4:
        print("You Press Wrong No.")
        break

    elif a==1:
        side=int(input("Enter a side of a Square : "))
        print(side*side)
        x=int(input("If you want to continue Press 5 otherwise Press 0 to exit: "))
        if x!=5:
            break
          
    elif a==2:
        length=int(input("Enter the length of the Rectangle : "))
        breadth=int(input("Enter the breadth of the Rectangle : "))
        print(length*breadth)
        y=int(input("If you want to continue Press 5 otherwise Press 0 to exit: "))
        if y!=5:
            break
       
    elif a==3:
        base=int(input("Enter the base of the Triangle : "))
        height=int(input("Enter the heigth of the Triangle : "))
        print(base*height/2)
        z=int(input("If you want to continue Press 5 otherwise Press 0 to exit: "))
        if z!=5:
            break
        
    elif a==4:
        radius=int(input("Enter the radius of the Circle : "))
        print((22*radius*radius)/7)
        p=int(input("If you want to continue Press 5 otherwise Press 0 to exit: "))
        if p!=5:
            break
        
        

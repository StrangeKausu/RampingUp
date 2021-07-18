list1=[]
list2=[]
a=int(input("Enter Number Of Students : "))
def main():
    take_input()
    print_studentmarks()
    print_averagemarks()
    
def take_input():
    for i in range(0,a):
        Name=str(input("Name : "))
        Marks=int(input("Marks : "))
        list1.append(Name)
        list2.append(Marks)
    print("\n")
    
    
def print_studentmarks():
    print("Marks of all students are")
    for i in range(0,a):
        print(list1[i],":",list2[i])
    print("\n")

def print_averagemarks():
    count=0
    for i in list2:
        count+=i
    print("The average of all marks is",count/len(list2))

if __name__=="__main__":
    main()
    
    




    

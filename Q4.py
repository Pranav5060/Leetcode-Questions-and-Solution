#Write a Python Program to input information for n number of students as given below: (Use OOP concepts)

#a. Name; b. Registration Number; c. Total Marks
class Student:
    def __init__(self,name,Registration_no,Total_marks):
        self.name=name
        self.Registration_no=Registration_no
        self.Total_marks=Total_marks


n=5
st=dict()
for i in range(1,n):
    name=input('Enter Name of the student')
    Registration_no = int(input("Enter registration no."))
    marks=[]
    for i in range(1):
        Total_marks = float(input("enter Total marks"))
        marks.append(Total_marks)
    st[name,Registration_no]=marks


print(st)

class Employee:
    
    #constructor
    def __init__(self, first, last, pay):
        self.first=first
        self.last=last
        self.pay=pay
        self.email=first+'.'+last+'@company.com'
    
    def fullname(self):
        return self.first+" "+self.last
    
    def apply_raise(self):
        self.pay = int(self.pay*1.04)
    
    

emp1=Employee('a','b',1000)
emp2=Employee('c','d',1001)

print(emp1)
print(emp2)

print(emp1.fullname())
print(Employee.fullname(emp1))


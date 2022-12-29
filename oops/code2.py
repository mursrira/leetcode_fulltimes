class Employee:
    no_of_employees=0
    raise_amt=1.04
    
    #constructor
    def __init__(self, first, last, pay):
        self.first=first
        self.last=last
        self.pay=pay
        self.email=first+'.'+last+'@company.com'
    
    def fullname(self):
        return self.first+" "+self.last
    
    def apply_raise(self):
        self.pay=int(self.pay*Employee.apply_raise)
        # self.pay=int(self.pay*self.apply_raise)


    

emp1=Employee('a','b',1000)
emp2=Employee('c','d',1001)


#namespace can be accessed by __dict__
# print(Employee.__dict__)
"""
{'__module__': '__main__', 'no_of_employees': 0, 'apply_raise': <function apply_raise at 0x102fe7048>, 'raise_amt': 1.04, 'fullname': <function fullname at 0x102fdcf98>, '__doc__': None, '__init__': <function __init__ at 0x102fdcf28>
"""

# print(emp1.__dict__)
"""
{'pay': 1000, 'last': 'b', 'email': 'a.b@company.com', 'first': 'a'}
"""

print("emp1.raise_amt={}".format(emp1.raise_amt))
print("Employee.raise_amt={}".format(Employee.raise_amt))
print("emp2.raise_amt={}".format(emp2.raise_amt))

emp1.raise_amt=1.05

print("emp1.raise_amt={}".format(emp1.raise_amt))
print("Employee.raise_amt={}".format(Employee.raise_amt))
print("emp2.raise_amt={}".format(emp2.raise_amt))

"""
emp1.raise_amt=1.04
Employee.raise_amt=1.04
emp2.raise_amt=1.04
emp1.raise_amt=1.05
Employee.raise_amt=1.04
emp2.raise_amt=1.04
"""
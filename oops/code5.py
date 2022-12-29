"""
We will talk about special methods we can use here.
Magic/Dunder methods=__method-name__
"""
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
        self.pay=int(self.pay*Employee.raise_amt)
        # self.pay=int(self.pay*self.apply_raise)
    
    @classmethod
    def set_raise_amt(cls, amount):
        cls.raise_amt=amount
        
    @classmethod
    def from_string(cls, emp_str):
        first, last, pay = emp_str.split('-')
        return cls(first, last, pay)
    
    @staticmethod
    def is_workday(day):
        if day.weekday()==5 or day.weekday()==6:
            return False
        return True
    
    # Unambiguous representation of object
    # It is used for printing and logging and troubleshooting.
    # def __repr__(self):
    #     pass
    
    # Readable implementation of object, which will be seen by other
    # developers.
    # def __str__(self):
    #     pass
    

emp_str_1='John-Doe-70000'
emp_str_2='Steve-Smith-30000'
emp_str_3='Jane-Doe-90000'

new_emp_1=Employee.from_string(emp_str_1)
new_emp_2=Employee.from_string(emp_str_2)
new_emp_3=Employee.from_string(emp_str_3)    

print(new_emp_1)







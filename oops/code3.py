"""
class method: It will take default argument as class which gets passed in to the method.
static method: It will not take class name or instance name(object) as input to the method
normal method: It will take object(self) as input to the method.

you can also use class methods also as constructors.
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
        self.pay=int(self.pay*Employee.apply_raise)
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
    
    # #Addtional constructor
    # @classmethod
    # def fromtimestamp(cls, t):
    #     "Construct a date from a POSIX timestamp (like time.time())."
    #     y, m, d, hh, mm, ss, weekday, jday, dst = _time.localtime(t)
    #     return cls(y, m, d)
    
    # @classmethod
    # def today(cls):
    #     "Construct a date from time.time()."
    #     t=_time.time()
    #     return cls.fromtimestamp(t)


        
        


emp1=Employee('a','b',10000)
emp2=Employee('c','d',100000)

Employee.set_raise_amt(1.05)

emp_str_1='John-Doe-70000'
emp_str_2='Steve-Smith-30000'
emp_str_3='Jane-Doe-90000'

new_emp_1=Employee.from_string(emp_str_1)
new_emp_2=Employee.from_string(emp_str_2)
new_emp_3=Employee.from_string(emp_str_3)

print(new_emp_1.first)
print(new_emp_1.email)


import datetime
my_date = datetime.date(2016, 7, 10)
print(Employee.is_workday(my_date))

my_date = datetime.date(2016, 7, 11)
print(Employee.is_workday(my_date))
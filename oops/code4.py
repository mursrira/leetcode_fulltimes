"""
Inheritance helps to inheret functionality from parent class
without affecting parent class at all.
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

class Developer(Employee):
    raise_amt = 1.10
    

    def __init__(self, first, last, pay, prog_lang):
        super(Developer, self).__init__(first, last, pay)
        self.prog_lang = prog_lang



class Manager(Employee):
    # Not advisable to pass mutable objects like list/dictionary in default arguments of init method.
    def __init__(self, first, last, pay, employees=None):
        super(Manager, self).__init__(first, last, pay)
        if employees==None:
            self.employees=[]
        else:
            self.employees=employees
            
    
    def add_emp(self, emp):
        if emp not in self.employees:
            self.employees.append(emp)
            
    def remove_emp(self, emp):
        if emp in self.employees:
            self.employees.remove(emp)

    def print_emps(self):
        for emp in self.employees:
            print('-->', emp.fullname())


dev1=Developer('a','b',50000,'Python')
dev2=Developer('c','d',60000,'Java')

print(dev1.pay)
dev1.apply_raise()
print(dev1.pay)

print(dev1.email)
print(dev1.prog_lang)


mgr1=Manager('e','f', 90000, [dev1])

print(mgr1.email)
mgr1.add_emp(dev2)
mgr1.remove_emp(dev1)

mgr1.print_emps()


# Two built in functions

print(isinstance(mgr1, Manager))
print(isinstance(mgr1, Employee))
print(isinstance(mgr1, Developer))

print(issubclass(Developer, Employee))
print(issubclass(Manager, Employee))
print(issubclass(Manager, Developer))


# it is used so much in python Httpexception 
# class of whiskey library.

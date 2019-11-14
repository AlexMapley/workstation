class MyClass:
  x = 5
  
p1 = MyClass()
print(p1.x)

class Person:
  def __init__(mysillyobject, name, age):
    mysillyobject.name = name
    mysillyobject.age = age

  def myfunc(self):
    print("Hello my name is " + self.name)

  def myfuncfoo(abc):
    print("Hello my name is " + abc.name)

p1 = Person("John", 36)

print(p1.name)
print(p1.age)

p1.myfunc()
p1.myfuncfoo()
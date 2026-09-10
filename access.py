class Parent:
    def __init__(self):
        self.public_var = "Public"
        self._protected_var = "Protected"
        self.__private_var = "Private"

    def accessFromSameClass(self):
        print("Inside Parent Class : ")
        print("Public : ", self.public_var)
        print("Protected : ", self._protected_var)
        print("Private : ", self.__private_var)


class Child(Parent):
    def accessFromSubclass(self):
        print("Inside Subclass : ")
        print("Public : ", self.public_var)
        print("Protected : ", self._protected_var)
        try:
            print("Private : ", self.__private_var)
        except AttributeError:
            print("Private : ❌ Cannot Access")


class Stranger:
    def accessFromOtherClass(self, obj):
        print("Inside Stranger Class : ")
        print("Public : ", obj.public_var)
        print("Protected : ", obj._protected_var)
        try:
            print("Private : ", obj.__private_var)
        except AttributeError:
            print("Private : ❌ Cannot Access")


p = Parent()
c = Child()
s = Stranger()

print("\nAccess From Same Class : ")
p.accessFromSameClass()

print("\nAccess From Subclass : ")
c.accessFromSubclass()

print("\nAccess From Other Class : ")
s.accessFromOtherClass(p)
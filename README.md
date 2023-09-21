# CPP-Module-03
---
## **Navigation table:**
1. [Inheritance.](#inheritance)
    1. [Access Control and Inheritance](#access-control-and-inheritance)
    1. [Type of Inheritance](#type-of-inheritance)
        1. [Public Inheritance](#public-inheritanc)
        1. [Protected Inheritance](#protected-inheritanc)
        1. [Private Inheritance](#private-inheritanc)
1. [Multiple Inheritance](#multiple-inheritance)
    1. [Diamond Problem](#diamond-problem)
    1. [Virtual Inheritance](#virtual-inheritance)
---
## **Inheritance**

One of the most important concepts in object-oriented programming is that of inheritance. Inheritance allows us to define a class in terms of another class, which makes it easier to create and maintain an application. This also provides an opportunity to reuse the code functionality and fast implementation time.

To inherit from a class we use the following syntax:
```cpp
class derived-class: access-specifier base-class
```
---
### ***Access Control and Inheritance***
A derived class can access all the non-private members of its base class. Thus base-class members that should not be accessible to the member functions of derived classes should be declared private in the base class.

We can summarize the different access types according to - who can access them in 
the following way:

| Access        | Public | Private | Protected |
|---------------|--------|---------|-----------|
| Same class    | yes    | yes     | yes       |
| Derived class | yes    | yes     | no        |
| Outside class | yes    | no      | no        |

A derived class inherits all base class methods with the following exceptions:
 + Constructors, destructors and copy constructors of the base class.
 + Overloaded operators of the base class.
 + The friend functions of the base class.
---
### ***Type of Inheritance***

When deriving a class from a base class, the base class may be inherited through public, protected or private inheritance. The type of inheritance is specified by the access-specifier as explained above.We hardly use protected or private inheritance, but public inheritance is commonly used. While using different type of inheritance, following rules are applied:

#### ***Public Inheritanc:***
> When deriving a class from a public base class, public members of the base class become public members of the derived class and protected members of the base class become protected members of the derived class. A base class's private members are never accessible directly from a derived class, but can be accessed through calls to the public and protected members of the base class.

#### ***Protected Inheritanc:***
> When deriving from a protected base class, public and protected members of the base class become protected members of the derived class.

#### ***Private Inheritanc:***
> When deriving from a private base class, public and protected members of the base class become private members of the derived class.

## **Multiple Inheritance**
A C++ class can inherit members from more than one class using the following synatx:
```cpp
class derived-class : access-specifier base-class1 , access-specifier base-class2, ...
```
Where access is one of public, protected, or private and would be given for every base class and they will be separated by comma as shown above.

---
### ***Diamond Problem***
In C++, a class can inherit from multiple classes which is commonly referred as multiple inheritance. But this can cause problems sometimes, as you can have multiple instances of the base class.

To tackle this problem, C++ uses a technique which ensures only one instance of a base class is present. That technique is referred as virtual inheritance.

![problem diagram](https://www.freecodecamp.org/news/content/images/2023/02/hierarchial-1.png)

> We can see that we have multiple instances of the class A. So the request to a variable becomes ambiguous because the compiler doesn't know which instance we are referring to – is it through B or through C ? That's the real problem.

---
### ***Virtual Inheritance***

To inherit virtually we simply add a keyword virtual before our base class name in the derived class declaration like this:

```cpp
    class A {
        //IMPLEMANTATION
    };
    class B : virtual public A {
        //IMPLEMANTATION
    };
    class C : virtual public A {
        //IMPLEMANTATION
    };
    class D : public B, public C {
        //IMPLEMANTATION
    };
```
> Inheriting virtually guarantees that there will be only one instance of the base class among the derived classes that virtually inherited it. 

![corecte way to inherite](https://www.freecodecamp.org/news/content/images/2023/02/diamond-1.png)

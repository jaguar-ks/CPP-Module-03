# CPP-Module-03
---
## **Navigation table:**
1. [Inheritance.](#inheritance)
1. [Access Control and Inheritance](#access-control-and-inheritance)

---
### *Inheritance*.

One of the most important concepts in object-oriented programming is that of inheritance. Inheritance allows us to define a class in terms of another class, which makes it easier to create and maintain an application. This also provides an opportunity to reuse the code functionality and fast implementation time.

To inherit from a class we use the following syntax:
```cpp
class derived-class: access-specifier base-class
```
---
## **Access Control and Inheritance**
A derived class can access all the non-private members of its base class. Thus base-class members that should not be accessible to the member functions of derived classes should be declared private in the base class.

We can summarize the different access types according to - who can access them in 
the following way:

| Access        | Public | Private | Protected |
|---------------|--------|---------|-----------|
| Same class    | yes    | yes     | yes       |
| Derived class | yes    | yes     | no        |
| Outside class | yes    | no      | no        |

A derived class inherits all base class methods with the following exceptions:
> + Constructors, destructors and copy constructors of the base class.
> + Overloaded operators of the base class.
> + The friend functions of the base class.

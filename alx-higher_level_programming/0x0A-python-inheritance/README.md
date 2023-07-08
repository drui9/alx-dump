Overview
This project introduces the concept of Inheritance in Python. Inheritance is a powerful tool in object-oriented programming (OOP) that allows classes to inherit attributes and methods from another class, allowing code reusability and reducing redundancy.

Requirements
All files are interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
Code should follow the PEP 8 style guide
All files should be executable
Files
0-lookup.py: a function that returns the list of available attributes and methods of an object
1-my_list.py: a class MyList that inherits from list, with a new method print_sorted() that prints the list in ascending order
2-is_same_class.py: a function that checks if an object is an instance of a specified class
3-is_kind_of_class.py: a function that checks if an object is an instance of a specified class, or an instance of a class that inherited from the specified class
4-inherits_from.py: a function that checks if an object is an instance of a class that inherited (directly or indirectly) from a specified class
5-base_geometry.py: an empty class BaseGeometry
6-base_geometry.py: a class BaseGeometry with a method area() that raises an exception when called
7-base_geometry.py: a class BaseGeometry with public instance method area() and integer_validator()
8-rectangle.py: a class Rectangle that inherits from BaseGeometry with attributes width and height
9-rectangle.py: a class Rectangle with implementations of the area() method
10-square.py: a class Square that inherits from Rectangle with an attribute size

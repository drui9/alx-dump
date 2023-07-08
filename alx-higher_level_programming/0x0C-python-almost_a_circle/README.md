Introduction
"Almost a circle" is a Python package that provides a class for creating objects that represent regular polygons with an arbitrary number of sides that closely resemble a circle.

The package was developed as part of the Holberton School's Foundations curriculum.

Installation
You can install "Almost a circle" via pip:

bash
Copy code
pip install almost-a-circle
Usage
To use "Almost a circle", first import the Rectangle class:

python
Copy code
from almost_a_circle import Rectangle
You can then create a Rectangle object by specifying its width and height:

python
Copy code
r = Rectangle(10, 20)
You can access the width and height of the rectangle using the width and height properties:

python
Copy code
print(r.width)  # Output: 10
print(r.height) # Output: 20
You can also set the width and height of the rectangle using the same properties:

python
Copy code
r.width = 30
r.height = 40
print(r.width)  # Output: 30
print(r.height) # Output: 40
You can calculate the area and perimeter of the rectangle using the area and perimeter methods:

python
Copy code
print(r.area())      # Output: 1200
print(r.perimeter()) # Output: 140

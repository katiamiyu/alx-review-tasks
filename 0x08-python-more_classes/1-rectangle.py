#!/usr/bin/python3
"""Module contains Rectangle class"""


class Rectangle:

    def __init__(self, width=0, height=0):
        """constructor function
         Args:
            width: integer, first argument
            height: integer, second argument
        """

        self.width = width
        self.height = height

    @property
    def width(self):
        """width getter function
           Return:
             return value. width
        """
        return self.__width

    @width.setter
    def width(self, value):
        """width setter function
          Args:
            value: integer, only arguement
        """
        if not isinstance(value, int):
            raise TypeError("width must be an integer")
        if value < 0:
            raise ValueError("width must be >= 0")
        self.__width = value

    @property
    def height(self):
        """height getter function
           Return:
             return value. height
        """
        return self.__height

    @height.setter
    def height(self, value):
        """height setter function
           Args:
             value: integer, only arguement
         """
        if not isinstance(value, int):
            raise TypeError("height must be an integer")
        if value < 0:
            raise ValueError("height must be >= 0")
        self.__height = value

    def area(self):
        """area function
           Returns:
             return value. height * width
        """
        return (self.width * self.height)

    def perimeter(self):
        """perimeter function
           Returns:
             return value. 2(height + width)
        """
        if self.width == 0 or self.height == 0:
            return 0
        return 2 * (self.width + self.height)

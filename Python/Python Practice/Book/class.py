class Rectangle:
   def __init__(self, inputLength, inputBreadth, unit_cost=0): # this method is to define all the variables
       self.length = inputLength
       self.breadth = inputBreadth
       self.unit_cost = unit_cost
   def get_area(self): # this method is to cal the area
       return self.length * self.breadth
   def calculate_cost(self): # this method is to cal the cost
       area = self.get_area()
       return area * self.unit_cost
# breadth = 120 units, length = 160 units, 1 sq unit cost = Rs 2000
r = Rectangle(160, 120, 2000)
print("Area of Rectangle: %s sq units" % (r.get_area()))
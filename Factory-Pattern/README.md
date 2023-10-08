## Steps

1. Create a parent cpp file
2. Create a header hpp file for the parent file
3. Create both header file and cpp file for a subclass of the parent

Client has the normal code

Smart Client has the code which uses Factory Pattern to implement the
vehicle class

Library should be responsible to decide which object type to create based on input

Client calls library's factory and pass type of vehicle
without worrying about creation of the object

# design-patterns

Low level system design: Oct 2023

# Commands:

`g++ -c <names of the files seprated by ,>.cpp`
this one create the vehicle.o files or the byte files for your files

`ar ru vehicle_library.a car.o bike.o`
The above code will put all the byte files in a archieve library
here its called 'vehicle_library.a'
You give this to your client

`g++ -o client client.cpp vehicle_library.a`
This is for creating an executable file for the client which is based off vehicle_library

`./client`
running the executable file

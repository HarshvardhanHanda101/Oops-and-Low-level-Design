__Object Oriented Programming__
Object-Oriented Programming (OOP) is a programming paradigm centered around the concept of "objects," which can contain data and code to manipulate that data. OOP is designed to provide a clear modular structure for programs, making it easier to manage complexity, enhance code reusability, and facilitate maintenance.

__Key Concepts of OOP__
__Objects:__

Instances of classes that encapsulate data and behaviors. Objects can represent real-world entities or abstract concepts.
Example: In a car simulation, car1 and car2 can be objects of the Car class, each with its own properties like color, model, and methods like drive and stop.
__Classes:__

Blueprints for creating objects. A class defines the properties (attributes) and behaviors (methods) that the objects created from the class can have.
Example: A Car class defines attributes like make, model, and year, and methods like start(), drive(), and stop().
__Encapsulation:__

The practice of bundling data (attributes) and methods (functions) that operate on the data into a single unit or class. Encapsulation also involves restricting access to certain components, usually through access modifiers like private, protected, and public.
Example: A Car class might have private attributes like _engineStatus and public methods like startEngine() and stopEngine().
__Inheritance:__

The mechanism by which one class (child or subclass) can inherit attributes and methods from another class (parent or superclass). Inheritance promotes code reuse and establishes a natural hierarchy.
Example: A Sedan class might inherit from a Car class, gaining all its attributes and methods, while adding specific attributes like trunkSize.
__Polymorphism:__

The ability to present the same interface for different data types or classes. In practice, it allows methods to do different things based on the object it is acting upon.
Example: A method drive() can be applied to objects of different classes, like Car, Bike, and Truck, each implementing the method in its way.
__Abstraction:__

The concept of hiding the complex implementation details and showing only the necessary features of an object. It helps in reducing programming complexity and effort.
Example: A user interacts with a Car class through simple methods like start() and stop(), without needing to understand the complex underlying mechanics.

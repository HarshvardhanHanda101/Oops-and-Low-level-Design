__ABSTRACT FACTORY METHOD IN CREATION DESIGN PATTERN :__
It provides an interface for creating families of related or dependant object without creating their concrete classes.
This method is useful when a system needs to be independant of how it's ojects are created, composed and represented
When there exists multiple families of one product.

__Components__
__Abstract Factory Interface__:

Declares a set of methods for creating abstract products.
__Concrete Factory Classes:__

Implement the creation methods for specific product variants.
__Abstract Product Interfaces:__

Declare interfaces for a set of distinct but related products.
__Concrete Products:__

Define products to be created by the corresponding concrete factory.
Implement the abstract product interfaces.
__Client:__

Uses the abstract factory and abstract products.
Interacts with the products through their abstract interfaces.


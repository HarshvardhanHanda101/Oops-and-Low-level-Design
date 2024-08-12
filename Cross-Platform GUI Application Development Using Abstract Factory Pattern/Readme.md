__Problem statement :__
Title: Cross-Platform GUI Application Development Using Abstract Factory Pattern

Objective:
Develop a cross-platform graphical user interface (GUI) application that can support different operating systems (Windows and MacOS) without modifying the core application logic. The application should be able to render GUI elements (such as buttons and checkboxes) in the style of the target operating system.

Background:
In modern software development, it's common to create applications that need to run on multiple operating systems. However, each operating system has its own distinct style for GUI components, such as buttons, checkboxes, and windows. To maintain a consistent look and feel, developers must design their applications to adapt to the GUI standards of each platform.

Directly hardcoding platform-specific GUI elements can lead to a tightly coupled and inflexible codebase, making it difficult to add support for new platforms or update existing ones. The Abstract Factory design pattern provides a solution by defining a family of related products (in this case, GUI components) and encapsulating the creation process.

Requirements:

Product Interfaces:

Define abstract base classes (Button, Checkbox) that represent common GUI components. These interfaces will declare methods like paint(), which should be implemented by platform-specific classes.
Concrete Products:

Implement concrete classes for each product (e.g., WindowsButton, MacOSButton, WindowsCheckbox, MacOSCheckbox) that conform to the respective platform's style.
Abstract Factory Interface:

Create an abstract factory interface (GUIFactory) that declares methods for creating each type of product (createButton(), createCheckbox()).
Concrete Factories:

Implement concrete factories (WindowsFactory, MacOSFactory) that create platform-specific instances of the GUI components.
Application Logic:

Design the application to use the abstract factory to create GUI components. The application should remain independent of the specific products it uses, relying solely on the abstract interfaces.
Cross-Platform Support:

The application should be able to switch between different platforms (e.g., Windows, MacOS) without altering the core logic. The correct factory should be instantiated based on the target platform, and the application should create GUI elements using this factory.
Deliverables:

A fully implemented C++ project that demonstrates the Abstract Factory pattern to create GUI elements for both Windows and MacOS platforms.
The project should include all necessary headers and source files, demonstrating proper use of polymorphism and the Abstract Factory pattern.
The application should print out the type of GUI elements being rendered (e.g., "Rendering a button in Windows style") to demonstrate that the correct platform-specific implementation is being used.
Expected Outcome:
By implementing the Abstract Factory pattern, the application will be able to support multiple operating systems with ease. This approach will allow for the addition of new platforms in the future with minimal changes to the existing codebase, ensuring that the application remains scalable and maintainable.

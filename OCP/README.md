## OCP: The Open-Closed Principle

> *Software entities (classes, modules, functions, etc. ) should be open for extension, but closed for modification*

When a single change to a program results in a cascade of changes to dependent modules, the design smells of **Rigidity**. The OCP advises us to refactor the system so that further changes of that kind will not cause more modifications.

If the OCP is applied well, then further changes of that kind are achieved by adding new code, not by changing old code that already works.

### Description

1. **Open for extension**: As the requirements of the application change, we are able to extend the module with new behaviors that satisfy those changes
2. **Closed for modification:** Extending the behavior of a module does not result in changes to the source or binary code of the module.

In object-oriented programming, abstract base classes serve as templates for creating subclasses. These subclasses can have diverse behaviors, even though they all share the common structure of the base class.

When you have a module in your program that works with an abstract base class, you can keep that module unchanged — meaning it's "closed for modification." But you can still introduce new behaviors by adding new subclasses, which is how you "extend" the module's capabilities. This approach allows your module to support new features without altering its existing code.
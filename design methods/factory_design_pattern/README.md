# Factory Design Pattern

The Factory design pattern centralizes object creation behind a factory method or class. Client code asks the factory for an object instead of directly constructing a concrete implementation.

This helps keep client code independent of concrete classes and makes it easier to add new object types later.

## Example idea

A `VehicleFactory` can create a `Car`, `Bike`, or `Truck` from a requested type. The caller works with the common `Vehicle` interface rather than knowing how each concrete vehicle is constructed.

## Why use it?

- Keeps object-creation logic in one place.
- Reduces coupling between client code and concrete classes.
- Makes adding new implementations easier.


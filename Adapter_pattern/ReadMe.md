# Adapter Pattern & Facade Pattern
Sample code for adapter pattern and facade pattern

## What's in Common?
These two patterns do share something in common, for example, they both wrap classes that are being called by the client, providing more simpler interfaces for the client to use. The important thing is to prevent from making a lot of classes that correlate too much with each other. 

## The Differences
An adapter is suitable for:
- We have a class that its interface does not fit the need of our program, so we use adapter to change its interface.
- Also, there are two types of adapter: object and class adapters. Class adapter requires multiple inheritance.

One may find that decorator pattern also wraps classes, but the main difference is that decorator pattern is about to add new behaviors by wrapping new classes.   

A facade:
- Can be used to unify a set of interfaces, it decouples the client from knowing too much details of the complex subsystem (or detailed implementation of sub-classes). 
- Requires programmer to know the subsystem and use delegation to perform the work.

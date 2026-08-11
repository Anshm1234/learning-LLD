# Strategy Design Pattern

The Strategy design pattern defines a family of behaviors, puts each behavior in its own class, and lets an object use the behavior it needs at runtime.

This example models robots with separate walking, talking, and flying behaviors. Instead of putting every possible behavior inside the `robot` class, each behavior is represented by its own strategy class.

## Strategies in this example

- `walkable`: `walktrue` or `walkfalse`
- `talkable`: `talktru` or `notalk`
- `flyable`: `flytrue` or `flyfalse`

## Why use it?

- Compose a robot from reusable behaviors.
- Change a behavior without modifying the robot classes.
- Avoid large conditional statements and duplicated code.

For example, a companion robot can receive `walktrue`, `talktru`, and `flytrue` strategies when it is created.


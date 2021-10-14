# Toolhead-API
I2C tool head API for 3D printers and other devices.

There are 2 ideas behind this:
- It may not be the best option to print a 3D object with a drag knife or similar.
- Design of automatic tool heads. 

Hardware requirements
- a control board with I2C like. for example the Bigtreetech Octopus board
- a tool changer like e.g. Mutant V2. I2C requires 3 pins of the connector.
- an Arduino on the tool head. Instead of a relatively large Uno board you can also use a diy board.
/*
In this design, the Car class is tightly coupled to the Engine class. 
If the Engine class changes
—
for example, if it requires additional parameters to start, 
or if pre-start checks should now be done by the Engine class itself
-
you'll have to modify the Car class as well.
*/

class Engine {
public:
    void start() {
        // Start the engine
    }
};

class Car {
private:
    Engine engine;
public:
    void start() {
        // Perform various pre-start checks
        engine.start();
        // Perform post-start actions
    }
};

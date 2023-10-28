class Engine {
public:
    virtual void start() {
        // Start the engine
    }
};

class Car {
private:
    Engine& engine;  // Reference to an engine
public:
    Car(Engine& e) : engine(e) {}  // Inject the engine dependency

    void start() {
        // Perform various pre-start checks
        engine.start();
        // Perform post-start actions
    }
};

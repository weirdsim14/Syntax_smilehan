class IStartable {
public:
    virtual void start() = 0;
};

class Engine : public IStartable {
    // Implementation
};

class Car {
private:
    IStartable& engine;
public:
    Car(IStartable& e) : engine(e) {}

    void start() {
        engine.start();
    }
};

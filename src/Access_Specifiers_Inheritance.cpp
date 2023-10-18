class Base {
public:
    int pub;
protected:
    int prot;
private:
    int priv;
};

class Derived : public Base {
    // 'pub' is accessible as public
    // 'prot' is accessible as protected
    // 'priv' is NOT accessible
};

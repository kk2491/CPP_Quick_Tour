// Pure virtual function

#include <iostream>
#include <vector>

class Shape {                       // Abstract Base class

    private:
    double data_1;
    double data_2;

    public:
    virtual void Draw() = 0;        // Pure virtual functions
    virtual void Rotate() = 0;      // Pure virtual functions
    virtual ~Shape() {};

};

class OpenShape : public Shape {    // Abstract classe - Not need to specify
    private:
    double open_shape_para;

    public:
    virtual ~OpenShape() {};
};

class ClosedShape : public Shape {  // Abstract classe - Not need to specify
    private:
    double closed_shape_para;
    
    public:
    virtual ~ClosedShape() {};
};

class Line : public OpenShape {     // Concrete Class
    private:
    double line_para;
    
    public:
    virtual void Draw() override {
        std::cout << "Draw line" << std::endl;
    }
    
    virtual void Rotate() override {
        std::cout << "Rotate Line" << std::endl;
    }

    virtual ~Line() {};
};

class Circle : public ClosedShape { // Concrete Class
    private:
    double circle_para;
    
    public:
    virtual void Draw() override {
        std::cout << "Draw Circle" << std::endl;
    }

    virtual void Rotate() override {
        std::cout << "Rotate Circle" << std::endl;
    }

    virtual ~Circle() {};
};

class Square : public ClosedShape { // Concrete Class
    private:
    double square_para;
    
    public:
    virtual void Draw() override {
        std::cout << "Draw Square" << std::endl;
    }

    virtual void Rotate() override {
        std::cout << "Rotate Square" << std::endl;
    }

    virtual ~Square() {};
};

void ScreenRefresh(const std::vector<Shape *> &shapes) {
    std::cout << "Refreshing" << std::endl;

    for (const auto &p : shapes) {
        p->Draw();
    }
    return;
}


int main() {

    // Shape shape_obj;                         // Error
    // Shape *shape_obj_ptr = new Shape();      // Error
    // ClosedShape closed_shape;                // Error
    // OpenShape open_shape;                    // Error

    // Circle circle_obj_1;    // This is statically bound
    // circle_obj_1.Draw();    // Not dynamic polymorphism

    Shape *ptr = new Circle();  // This is dynamic polymorphism
    ptr->Draw();                // This is dynamic polymorphism
    ptr->Rotate();              // This is dynamic polymorphism
    
    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();

    std::vector<Shape*> shapes = {s1, s2, s3};

    for (const auto &p : shapes) {
        p->Draw();
        p->Rotate();
    }

    ScreenRefresh(shapes);

    delete s1;
    delete s2;
    delete s3;
    delete ptr;

    return 0;
}
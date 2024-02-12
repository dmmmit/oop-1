class rectangle {
private:
    double width;
    double height;

public:
    rectangle(double w, double h) : width(w), height(h) {}

    double getArea() {
        return width * height;
    }

    double getPerimeter() {
        return 2 * (width + height);
    }



};
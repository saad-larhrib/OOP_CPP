#include <iostream>

using namespace std;

enum Operation { NONE, ADD, SUB, MUL, DIV };

class Calculator {
private:
    double _old_value = 0;
    double _new_value = 0;
    double _total = 0;
    Operation last_operation = NONE;

public:
    double add(double num) {
        _new_value = num;
        _total = _old_value + _new_value;
        _old_value = _total;
        last_operation = ADD;
        return _total;
    }

    double mul(double num) {
        _new_value = num;
        _total = _old_value * _new_value;
        _old_value = _total;
        last_operation = MUL;
        return _total;
    }

    double sub(double num) {
        _new_value = num;
        _total = _old_value - _new_value;
        _old_value = _total;
        last_operation = SUB;
        return _total;
    }

    double div(double num) {
        if (num == 0) {
            cout << "Error: Division by zero is not allowed." << endl;
            return _total;
        }
        _new_value = num;
        _total = _old_value / _new_value;
        _old_value = _total;
        last_operation = DIV;
        return _total;
    }

    void print() {
        switch (last_operation) {
            case ADD:
                cout << "The result after adding " << _new_value << " is: " << _total << endl;
                break;
            case SUB:
                cout << "The result after subtracting " << _new_value << " is: " << _total << endl;
                break;
            case MUL:
                cout << "The result after multiplying by " << _new_value << " is: " << _total << endl;
                break;
            case DIV:
                cout << "The result after dividing by " << _new_value << " is: " << _total << endl;
                break;
            default:
                cout << "No operation performed yet." << endl;
        }
    }
};

int main() {
    Calculator cal;
    cal.add(10);
    cal.print();

    cal.mul(2);
    cal.print();

    cal.add(5);
    cal.print();

    cal.add(20);
    cal.print();

    cal.sub(10);
    cal.print();

    cal.div(0);
    cal.print();

    cal.div(2);
    cal.print();

    return 0;
}

#include "mbed.h"

typedef struct {
    int age;
    float weight;
} Student;

class StudentClass {
private:
    int age;
    float weight;
public:
    void setAge(int _age) {
        age = _age;
    };

    void setWeight(float _weight) {
        weight = _weight;
    };

    int getAge() {
        return age;
    };

    float getWeight() {
        return weight;
    };

    void operator=(const int &_age) {
        age = _age;
    };

    void operator=(const float &_weight) {
        weight = _weight;
    };

    operator int() {
        return age;
    };

    operator float() {
        return weight;
    };

};


int main() {
    Student student;
    student.age = 21;
    student.weight = 61.4;

    printf("Age : %d, Weight : %f\n", student.age, student.weight);

    StudentClass studentclass;

    studentclass = 21;
    studentclass = 61.45;

    printf("Age : %d, Weight : %f\n", (int)studentclass, (float)studentclass);

    while(1){
    }
}
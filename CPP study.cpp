#include "CPP study.h"


void basic_output() {
    int age = 20;
    std::cout << "I'm " << age << " years old" << std::endl;
}

void basic_input() {
    int age;
    std::cout << "How old are you then? ";
    std::cin >> age;
    std::cout << "You a " << age << " years old fossil." << std::endl;
}

void use_auto() {
    auto max_students = 50;
    auto class_average = 88.5;
    
    std::cout << "Max students: " << max_students << std::endl;
    std::cout << "Class average: " << class_average << std::endl;
}

enum class TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int distance(int speed, int time) {
    return speed * time;
}

bool can_stop(TrafficLight light, int distance) {
    bool stop = false;
    stop = (light != TrafficLight::GREEN) && (distance > 500);
    return stop;

}


int main() {
    basic_output();
    basic_input();
    use_auto();

    int speed = 55;
    int time_required = 100;
    int dt = distance(speed, time_required);
    TrafficLight light = TrafficLight::RED;
    bool isstop = can_stop(light, dt);
    std::cout << (isstop ? "Yes" : "No") << "\n";
    return 0;
}
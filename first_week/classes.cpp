#include <iostream>
#include <string>
using namespace std;

class Robot {
public:
    string name;
    int max_speed;
    int speed;

    Robot(string robot_name, int robot_max_speed) {
        cout << "Robot created!" << endl;
        speed = 0;
        name = robot_name;
        max_speed = robot_max_speed;
    }

    void increase_speed(int speed_increase) {
        speed = speed + speed_increase;
        if (speed > max_speed) {
            speed = max_speed;
        }
        cout << "Speed increased. Current speed: " << speed << endl;
    }
};

int main() {
    Robot robot1("Robo1", 10);
    robot1.increase_speed(5);
    robot1.increase_speed(7);
    return 0;
}


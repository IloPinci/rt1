#include <iostream>
#include <string>
using namespace std;

class Robot {
public:
    string name;
    int max_speed;
    int speed;
    int energy;

    Robot(string robot_name, int robot_max_speed) {
        cout << "Robot created!" << endl;
        speed = 0;
        energy = 100;
        name = robot_name;
        max_speed = robot_max_speed;
    }

    int increase_speed(int speed_increase, string rn) {

        if (energy > 0){

            speed = speed + speed_increase;
            energy = energy - speed_increase*2;

            if (speed >= max_speed) {
                speed = max_speed;

                cout <<"Max speed has been reached by: "<< name << endl;
                return 1;
            }

            cout << "Speed increased. Current speed: " << speed << endl;
        }
        else{
            energy = 100;
            cout << "The robot does not have enough energy to increase its speed. Recharging." << endl;
        }
        return 0;
    }
};

int main() {

    srand(time(0));
    int i = 1;

    Robot robot1("Robo1", 1000);
    Robot robot2("Robo2", 1000);


    while (i == 1){
        int f1 = robot1.increase_speed(rand()%51, "Robo1");
        int f2 = robot2.increase_speed(rand()%51, "Robo2");

        if (f1 == 1 || f2 == 1){
            break;
        }
    }
    return 0;
}


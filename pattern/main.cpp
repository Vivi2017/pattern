//
//  main.cpp
//  pattern
//
//  Created by vivisong on 6/24/16.
//
//

#include <iostream>
using namespace std;

class Command
{
public:
    virtual void execute() = 0;
};



class Light
{
    
    Light() {};

        void on()
        {
            cout << "Light On "<<endl;
        }
            

};

class LightOnCommand : Command {
    Light light;
    
     LightOnCommand(Light light) {
        this.light = light;
    }
    public void execute() {
        light.on();
    }
};


public class SimpleRemoteControl {
    Command slot;
    public SimpleRemoteControl() {}
    public void setCommand(Command command) {
        slot = command;
    }
    public void buttonWasPressed()
    {
        slot.execute();
    }
};

 class RemoteControlTest {
    public static void main(String[] args) {
        SimpleRemoteControl remote = new SimpleRemoteControl();
        Light light = new Light();
        LightOnCommand lightOn = new LightOnCommand(light);
        remote.setCommand(lightOn);
        remote.buttonWasPressed(); }
 };

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
};

#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    e
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:frequency
//  action 1:increase  frequency
frequency.increase();
//  action 2:decrease frequency
frequency.decrease();
//  action 3:show results
frequency.results();
//  2)
//  Noun:filter
//  action 1:sweep filter
filter.sweep();
//  action 2:stop
filter.stop();
//  action 3:start filter
filter.start();
//  3)
//  Noun:camera
//  action 1:zoom in camera
camera.zoomIn();
//  action 2:zoom out camera
camera.zoomOut();
//  action 3:restart
camera.restart();
//  4)box
//  Noun:
//  action 1:flib box 
box.flip();
//  action 2:change color
box.changeColor();
//  action 3:rotate box
box.rotate();
//  5)
//  Noun:printer
//  action 1:the printer  scan paper
printer.scan();
//  action 2:the printer print paper
printer.print();
//  action 3:the printer save photo
printer.save();
//  6)
//  Noun:bobby
//  action 1 bobby run
bobby.run();
//  action 2:bobby eat potato
bobby.eatPotato();
//  action 3:bobby sleep
bobby.sleep();
//  7)
//  Noun:turtle
//  action 1:the turtle open eye
turtle.openEye(),
//  action 2:the turtle swim
turtle.swim();
//  action 3:the turtle move left
turtle.moveLeft
//  8)robot
//  Noun:
//  action 1:the robot turnaround
robot.turnAround();
//  action 2:the robot jump
robot.jump();
//  action 3:the robot speak
robot.speak();
//  9)
//  Noun:walkman
//  action 1:the walkman play music
walkman.playMusic();
//  action 2: the walkman rewind
walkman.rewind();
//  action 3:the walkman forward
walkman.forward();
//  10) 
//  Noun:laptop
//  action 1: the laptop beep
laptop.beep();
//  action 2: the laptop refresh screen
laptop.refreshScreen();
//  action 3:the laptop download data
 laptop.downloadData();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}

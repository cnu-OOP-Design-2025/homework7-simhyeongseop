#include "duck.h"

void Duck::performFly(){
    if(flyBehavior)
        flyBehavior->fly();
}

void Duck::performQuack(){
    if(quackBehavior)
        quackBehavior->quack();
}

void Duck::setFlyBehavior(FlyBehavior* fb){
    if(flyBehavior)
        delete flyBehavior;
    flyBehavior = fb;
}

void Duck::setQuackBehavior(QuackBehavior* qb){
    if(quackBehavior) 
        delete quackBehavior;
    quackBehavior = qb;
}


MallardDuck::MallardDuck()
    : Duck(new FlyWithWings(), new Quack()) {}

RedheadDuck::RedheadDuck()
    : Duck(new FlyWithWings(), new Quack()) {}

RubberDuck::RubberDuck()
    : Duck(new FlyNoWay(), new Squeak()) {}

DecoyDuck::DecoyDuck()
    : Duck(new FlyNoWay(), new MuteQuack()) {}

ModelDuck::ModelDuck()
    : Duck(new FlyNoWay(), new MuteQuack()) {}

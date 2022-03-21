#include "Stacks.h"

Stacks::Stacks(/* args */)
{
}

Stacks::~Stacks()
{
}

void Stacks::addTop(int n){
    if(values.size()==0) values.push_back(n);
    for(int i(0); i<values.size(); i++){
        values[i+1]=values[i];
    }
    values[0]=n;
}
int Stacks::getTop(){
    if(values.size()==0) return 0;
    else return values[0];
}
void Stacks::removeTop(){
    if(values.size()==1); values.clear();
    for(int i(0); i<values.size(); i++){
        values[i]=values[i+1];
    }
    if(values.size()!=0) values.pop_back();
}
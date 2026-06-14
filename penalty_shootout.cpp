#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std; 

int main(){
    int choice;
    int goals=0;
srand(time(0));
string areas[]={"left","center","right"};
cout<<"====PENALTY SHOOTOUT!===="<<endl;
do{
cout<<"1. Play game"<<endl;
cout<<"2. how to play?"<<endl;
cout<<"3. end game"<<endl;
cin>>choice;
switch(choice){
    case 1:{
    int opt;
    for(int i=0;i<5;i++){
        int dive=rand()%3;
cout<<"\npenalty "<<i+1<<" of 5\n"<<endl;
cout<<"where would you like to shoot: "<<endl;
cout<<"1) left\n2) center\n3) right"<<endl;
cout<<"choose where to shoot: ";
cin>>opt;
if(opt<1||opt>3){
    cout<<"goalkeeper dived "<<areas[dive]<<endl;
    cout<<"shot missed!"<<endl;
}else if(areas[dive]==areas[opt-1]){
    cout<<"goalkeeper dived "<<areas[dive]<<" and you shot "<<areas[opt-1]<<endl;
    cout<<"goal saved!"<<endl;
}else{
    cout<<"goalkeeper dived "<<areas[dive]<<" and you shot "<<areas[opt-1]<<endl;
    cout<<"goal scored!"<<endl;
    goals++;
}
    }
cout<<"\nyou scored "<<goals<<" goals."<<endl;
    if(goals>=3){
        cout<<"you won!\n"<<endl;
    }else{
        cout<<"you lost!\n"<<endl;
    }
goals=0;
break;
    }
case 2:{
cout<<"you will get 5 penalties to score"<<endl;
cout<<"score 3 penalties to win"<<endl;
cout<<"if you fail to score 3 penalties then you will lose"<<endl;
break;
}
case 3:{
cout<<"game exited successfully"<<endl;
cout<<"thank you for playing! "<<endl;
break;}
default:
cout<<"pick a valid option."<<endl;
}
}while(choice!=3);
return 0;
}
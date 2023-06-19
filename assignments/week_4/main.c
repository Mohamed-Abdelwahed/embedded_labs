#include <stdio.h>
#include <conio.h>
#define LINE printf("\n=======================================\n")
void start();
void full_speed();
void half_speed();
void stop();
void state_machine(void (*P)());

int main(){

      void (*state)() = start;  
      int flag = 0;


    while (getch() == 'c')
    {
        // printf("work\n");
        if(state == start && flag == 0){
            flag++;
            state_machine(start);
            // state = half_speed;
        }else if(state == start && flag != 0){
            flag = 0;
            state_machine(half_speed);
            state = half_speed;
        }else if(state == half_speed && flag == 0){
            flag = 1;
            state_machine(stop);
            state = stop;
        }else if(state == stop && flag != 0){
            flag = 0;
            state_machine(full_speed);
            state = full_speed;
        }else{
        state_machine(stop);
        state = start;
        flag = 1;
        }
        

        
    }
    


















    return 0;
}







void start(){
    LINE;
    printf("Start");
    LINE;
}
void full_speed(){
    LINE;
    printf("Full Speed");
    LINE;
}

void half_speed(){
    LINE;
    printf("Half Speed");
    LINE;
}
void stop(){
    LINE;
    printf("Stop");
    LINE;
}

void state_machine(void (*p)()){
    p();
}
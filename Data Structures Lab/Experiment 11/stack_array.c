#include <stdio.h>
#include <stdlib.h>
#define max_size 10
void push(int);
int pop();
int Isfull();
int Isempty();
int Top = -1;
int stack[max_size];
int main(){
        int choice,value,want_continue;
        printf("Enter choice:1.Push,2.Pop\n");
        do{
                printf("Enter choice:");
                scanf("%d",&choice);
                switch(choice){
                        case 1:printf("Enter element:");
                               scanf("%d",&value);
                               push(value);
                               break;
                        case 2:value = pop();
                               printf("%d",value);
                               break;
                }
                printf("Want to continue, enter 1:");
                scanf("%d",&want_continue);
        }while(want_continue == 1);
return 0;
}

int Isfull(){
	return Top == max_size - 1;
}

int Isempty(){
	return Top == -1;
}

void push(int item){
	if(Isfull() == 1){
		printf("Overflow\n");
		return;
	}
	Top += 1;
	stack[Top] = item;
}

int pop(){
	if(Isempty() == 1){
		printf("Underflow\n");
		exit(0);
	}
	return stack[Top--];
}


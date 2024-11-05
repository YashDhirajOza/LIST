#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Stack{
int top;
unsigned capacity;
char *array;
};

struct Stack* createStack(unsigned capacity){

  // memoery 
  struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack ));
// assign the capacituy 
  stack-> capacity= capacity ;
 // move the top 
   stack -> top = -1;
// now array 
   stack-> array= (char*)malloc(stack->capacity *sizeof(char));
return stack ;
}
int isFull(struct Stack* stack){ return stack->top == stack-> capacity-1; }
int isEmpty(struct Stack* stack){ return stack->top == -1 ; }
void push(struct Stack* stack,char item){
  if(isFull(stack)){ printf("full"); }
  stack->array[++stack->top]=item ; }
void pop(struct Stack* stack,char item){
  if(isEmpty(stack)){printf("IS EMPLTY");}
  return stack->array[stack->top--];}
void reverse(char str[]){
int i;
struct Stack* stack = createStack(strlen(str);
for (int i=0;i<strlen(str);i++){ push(stack, str[i]);}
for(int i=0;i<strlen(str);i++){ str[i]= pop(stack,str[i]);}

int main(){
  char str[]="hello";
  reverse(str);
  return 0;
}















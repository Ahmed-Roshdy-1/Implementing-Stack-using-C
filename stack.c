#include "stack.h"

void createStack(stack *ps){

    ps->top=-1;
}

int stackFull(stack *ps){

  return(ps->top==maxStack-1);

}

void push(stackEntry e,stack *ps){

     ps->entry[++ps->top]=e;

}
int stackEmpty(stack *ps){

  return(ps->top==-1);

}
void pop(stackEntry *pe,stack *ps){

  pe=ps->entry[ps->top--];
}

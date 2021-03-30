# define maxStack 25
typedef char stackEntry;
typedef struct stack{

    int top;
    stackEntry entry[maxStack];


}stack;


void createStack(stack *ps);
int stackFull(stack *ps);
void push(stackEntry e,stack *ps);
int stackEmpty(stack *ps);
void pop(stackEntry *pe,stack *ps);

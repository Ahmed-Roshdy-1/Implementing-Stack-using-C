#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


void main()
{
    stackEntry e;

    int c;

    stack s;

    createStack(&s);



    while(!stackFull(&s)&& c!=3){


printf("(1) to enter element and push it :\n(2) to pop element :\n (3) to Exit :");
        scanf("%d",&c);

            switch (c){
            case 1:

                        printf("\n Enter e element to push it :");

                         scanf(" %c",&e);

                          push(e,&s);
                     break;


            case 2:
                if(!stackEmpty(&s)){

                pop(&e,&s);
                printf("removed element from stack %c\n \n",e);
                }else{printf("Empty !\n \n");}
                     break;
            case 3:
                if(c== 3){
                    break;
                }


            default :
                printf("%c this not a optional :",c);
            }





    }


    }



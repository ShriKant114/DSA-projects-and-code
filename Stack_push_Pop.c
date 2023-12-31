//This code is made by ShriKant sa cp3
#include <stdio.h>
#define size 5
int stack[size], top = -1;

void push(int item); // function prototype
void pop();

int main() {
    int ch, x;
    while (1) {
        printf("\nEnter 1 for push");
        printf("\nEnter 2 for pop");
        printf("\nEnter 3 to exit\n\n");

        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("\nEnter element to push: ");
                scanf("%d", &x);
                push(x);
                printf("%d is pushed\n",x);
                break;

            case 2:
                pop();
                break;

            case 3:
                return 0;

            default:
                printf("\nInvalid choice");
                break;
        }
    }

    return 0;
}

void pop() {
    if (top == -1) {
        printf("\nStack is Empty, Underflow condition occurs\n");
    } else {
        printf("\nElement %d is popped\n", stack[top]);
        top--;
    }
}

void push(int item) {
    if (top < size - 1) {
        top++;
        stack[top] = item;
    } else {
        printf("\nStack is full, Overflow condition occurs\n");
    }
}


    

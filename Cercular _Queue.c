#include <stdio.h> 
 #define size 5 
  
 int queue[size]; 
 int front = -1; 
 int rear = -1; 
  
 void insertion(int item); 
 void delition(); 
 void display(); 
  
 int main() { 
     int num, in; 
  
     while (1) { 
         printf("Enter 1 for insertion"); 
         printf("\nEnter 2 for deletion"); 
         printf("\nEnter 3 to display queue"); 
         printf("\nEnter 4 to exit\n\n"); 
  
         scanf("%d", &num); 
  
         switch (num) { 
             case 1: 
                 printf("\nEnter element to insert: "); 
                 scanf("%d", &in); 
                 insertion(in); 
                 break; 
  
             case 2: 
                 delition(); 
                 break; 
  
             case 3: 
                 display(); 
                 break; 
  
             case 4: 
                 return 0; 
  
             default: 
                 printf("\nInvalid choice\n\n"); 
                 break; 
         } 
     } 
  
     return 0; 
 } 
  
 void insertion(int item) { 
     if (front == (rear+1)%size) { 
         printf("\nCircular Queue is full, Overflow condition occurs\n\n"); 
     } else { 
         if (front == -1) { 
             front = rear = 0; 
         } else { 
             rear = (rear + 1) % size;
         } 
         queue[rear] = item; 
        printf("\n%d is inserted\n\n", queue[rear]); 
     } 
 } 
  
 void delition() { 
     if (front == -1) { 
         printf("\nCircular Queue is Empty, Underflow condition occurs\n\n"); 
     } else { 
         printf("\nElement %d is deleted\n\n", queue[front]); 
  
         if (front == rear) { 
             front = rear = -1; 
         } else { 
             front = (front + 1) % size;
         } 
     } 
 } 
  
 void display() { 
     int i; 
     if (front == -1) { 
         printf("\nCircular Queue is Empty\n\n"); 
     } else { 
         printf("\nCircular Queue elements are: "); 
         for (i = front; i != rear; i = (i + 1) % size) { 
             printf("%d ", queue[i]); 
         } 
         printf("%d\n\n", queue[i]); 
     } 
 }

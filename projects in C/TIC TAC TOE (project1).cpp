#include <stdio.h>
#include <stdlib.h>
int main()
{
    int p1,p2;
    char b1 ='1',b2 = '2',b3 = '3';
    char b4 ='4',b5 = '5',b6 = '6';
    char b7 ='7',b8 = '8',b9 = '9';
    char mark;
    
    printf("Tik Tac Toe _______");
    printf("\n%c  | %c  | %c\n",b1,b2,b3);
    printf("---|--- |---");
    printf("\n%c  | %c  | %c\n",b4,b5,b6);
    printf("---|--- |---");
    printf("\n%c  | %c  | %c\n",b7,b8,b9);
    printf("---|--- |---");
    
    //1move 
     printf("Enter the value of 1 player =");
     scanf("\n%d",&p1);
    
    switch(p1)
    {
        
        case 1:
        if (b1  = '1')
        b1 ='x';
       else{
           printf("invalid\n");
       } 
        
       
        break;
        case 2:
        if (b2 == '2')
        b2 = 'x';
        else{
            printf("invalid\n");
            
        }
        break;
        case 3:
        if(b3 == '3')
        b3 ='x';
        else{
            printf("invalid\n");
        }
        break;
        case 4:
        if(b4 == '4')
        b4 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 5:
        if(b5 == '5')
        b5 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 6:
        if(b6 == '6')
        b6 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 7:
        if(b7 == '7')
        b7 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 8:
        if(b8 == '8')
        b8 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 9:
        if(b9 == '9')
        b9 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        default:
        printf("INVALID INPUT\n");
    } 
    printf("Tik Tac Toe _______");
    printf("\n%c  | %c  | %c\n",b1,b2,b3);
    printf("---|--- |---");
    printf("\n%c  | %c  | %c\n",b4,b5,b6);
    printf("---|--- |---");
    printf("\n%c  | %c  | %c\n",b7,b8,b9);
    printf("---|--- |---");
    
    
    
    //2 move
    printf("Enter the value of 2 player =");
    scanf("\n%d",&p2);
    switch(p2){
    
        case 1:
        if(b1 == '1')
        b1 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        case 2:
        if(b2 == '2')
        b2 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        case 3:
        if(b3 == '3')
        b3 ='o';
        else{
            printf("invalid\n");
        }
        break;
        case 4:
        if(b4 == '4')
        b4 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        case 5:
        if(b5 == '5')
        b5 = 'o';
        else{
            printf("invaid\n");
        }
        break;
        case 6:
        if(b6 == '6')
        b6 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        case 7:
        if(b7 == '7')
        b7 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        case 8:
        if(b8 == 8)
        b8 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        case 9:
        if(b9 == '9')
        b9 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        default:
        printf("INVALID INPUT\n");
    }  
    printf("Tik Tac Toe _______");
    printf("\n%c  | %c  | %c\n",b1,b2,b3);
    printf("---|--- |---");
    printf("\n%c  | %c  | %c\n",b4,b5,b6);
    printf("---|--- |---");
    printf("\n%c  | %c  | %c\n",b7,b8,b9);
    printf("---|--- |---");
    
    
    // 3 move 
    
        
       
       printf("Enter the value of 1 player =");
     scanf("\n%d",&p1);
    
    switch(p1)
    {
        
        case 1:
        if (b1  = '1')
        b1 ='x';
       else{
           printf("invalid\n");
       }
        break;
        case 2:
        if (b2 == '2')
        b2 = 'x';
        else{
            printf("invalid\n");
            
        }
        break;
        case 3:
        if(b3 == '3')
        b3 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 4:
        if(b4 == '4')
        b4 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 5:
        if(b5 == '5')
        b5 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 6:
        if(b6 == '6')
        b6 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 7:
        if(b7 == '7')
        b7 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 8:
        if(b8 == '8')
        b8 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 9:
        if(b9 == '9')
        b9 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        default:
        printf("INVALID INPUT\n");
    } 
    printf("Tik Tac Toe _______");
    printf("\n%c  | %c  | %c\n",b1,b2,b3);
    printf("---|--- |---");
    printf("\n%c  | %c  | %c\n",b4,b5,b6);
    printf("---|--- |---");
    printf("\n%c  | %c  | %c\n",b7,b8,b9);
    printf("---|--- |---");
   
    
    // 4 move 
     printf("Enter the value of 2 player =");
    scanf("\n%d",&p2);
    switch(p2){
    
        case 1:
        if(b1 == '1')
        b1 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        case 2:
        if(b2 == '2')
        b2 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        case 3:
        if(b3 == '3')
        b3 ='o';
        else{
            printf("invalid\n");
        }
        break;
        case 4:
        if(b4 == '4')
        b4 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        case 5:
        if(b5 == '5')
        b5 = 'o';
        else{
            printf("invaid\n");
        }
        break;
        case 6:
        if(b6 == '6')
        b6 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        case 7:
        if(b7 == '7')
        b7 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        case 8:
        if(b8 == 8)
        b8 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        case 9:
        if(b9 == '9')
        b9 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        default:
        printf("INVALID INPUT\n");
    }  
    printf("Tik Tac Toe _______");
    printf("\n%c  | %c  | %c\n",b1,b2,b3);
    printf("---|--- |---");
    printf("\n%c  | %c  | %c\n",b4,b5,b6);
    printf("---|--- |---");
    printf("\n%c  | %c  | %c\n",b7,b8,b9);
    printf("---|--- |---");
    
    // 5 move
       printf("Enter the value of 1 player =");
     scanf("\n%d",&p1);
    
    switch(p1)
    {
        
        case 1:
        if (b1  = '1')
        b1 ='x';
       else{
           printf("invalid\n");
       } 
        
       
        break;
        case 2:
        if (b2 == '2')
        b2 = 'x';
        else{
            printf("invalid\n");
            
        }
        break;
        case 3:
        if(b3 == '3')
        b3 ='x';
        else{
            printf("invalid\n");
        }
        break;
        case 4:
        if(b4 == '4')
        b4 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 5:
        if(b5 == '5')
        b5 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 6:
        if(b6 == '6')
        b6 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 7:
        if(b7 == '7')
        b7 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 8:
        if(b8 == '8')
        b8 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 9:
        if(b9 == '9')
        b9 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        default:
        printf("INVALID INPUT\n");
    } 
    printf("Tik Tac Toe _______");
    printf("\n%c  | %c  | %c\n",b1,b2,b3);
    printf("---|--- |---");
    printf("\n%c  | %c  | %c\n",b4,b5,b6);
    printf("---|--- |---");
    printf("\n%c  | %c  | %c\n",b7,b8,b9);
    printf("---|--- |---");
    if ((b1==b2&&b2==b3)||(b4==b5&&b5==b6)||(b7==b8&&b8==b9)||(b1==b4&&b4==b7)||(b2==b5&&b5==b8)||(b3==b6&&b6==b9)||(b1==b5&&b5==b9)||(b3==b5&&b5==b7)){
        printf("\nPlayer1 %d (%c) WINS!\n",mark);
    return 0;
    }
    
    
    
    // 6 move
    printf("Enter the value of 2 player =");
    scanf("\n%d",&p2);
    switch(p2){
    
        case 1:
        if(b1 == '1')
        b1 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        case 2:
        if(b2 == '2')
        b2 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        case 3:
        if(b3 == '3')
        b3 ='o';
        else{
            printf("invalid\n");
        }
        break;
        case 4:
        if(b4 == '4')
        b4 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        case 5:
        if(b5 == '5')
        b5 = 'o';
        else{
            printf("invaid\n");
        }
        break;
        case 6:
        if(b6 == '6')
        b6 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        case 7:
        if(b7 == '7')
        b7 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        case 8:
        if(b8 == 8)
        b8 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        case 9:
        if(b9 == '9')
        b9 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        default:
        printf("INVALID INPUT\n");
    }  
    printf("Tik Tac Toe _______");
    printf("\n%c  | %c  | %c\n",b1,b2,b3);
    printf("---|--- |---");
    printf("\n%c  | %c  | %c\n",b4,b5,b6);
    printf("---|--- |---");
    printf("\n%c  | %c  | %c\n",b7,b8,b9);
    printf("---|--- |---");
    if ((b1==b2&&b2==b3)||(b4==b5&&b5==b6)||(b7==b8&&b8==b9)||(b1==b4&&b4==b7)||(b2==b5&&b5==b8)||(b3==b6&&b6==b9)||(b1==b5&&b5==b9)||(b3==b5&&b5==b7)){
            printf("\nPlayer2 %d (%c) WINS!\n", mark);
    return 0;
    }
    
    
    // 7 move
            printf("Enter the value of 1 player =");
     scanf("\n%d",&p1);
    
    switch(p1)
    {
        
        case 1:
        if (b1  = '1')
        b1 ='x';
       else{
           printf("invalid\n");
       } 
        
       
        break;
        case 2:
        if (b2 == '2')
        b2 = 'x';
        else{
            printf("invalid\n");
            
        }
        break;
        case 3:
        if(b3 == '3')
        b3 ='x';
        else{
            printf("invalid\n");
        }
        break;
        case 4:
        if(b4 == '4')
        b4 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 5:
        if(b5 == '5')
        b5 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 6:
        if(b6 == '6')
        b6 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 7:
        if(b7 == '7')
        b7 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 8:
        if(b8 == '8')
        b8 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 9:
        if(b9 == '9')
        b9 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        default:
        printf("INVALID INPUT\n");
    } 
    printf("Tik Tac Toe _______");
    printf("\n%c  | %c  | %c\n",b1,b2,b3);
    printf("---|--- |---");
    printf("\n%c  | %c  | %c\n",b4,b5,b6);
    printf("---|--- |---");
    printf("\n%c  | %c  | %c\n",b7,b8,b9);
    printf("---|--- |---");
    if ((b1==b2&&b2==b3)||(b4==b5&&b5==b6)||(b7==b8&&b8==b9)||(b1==b4&&b4==b7)||(b2==b5&&b5==b8)||(b3==b6&&b6==b9)||(b1==b5&&b5==b9)||(b3==b5&&b5==b7)){
            printf("\nPlayer1 %d (%c) WINS!\n", mark);
    return 0;
    }
    
    
    //8 move
        printf("Enter the value of 2 player =");
    scanf("\n%d",&p2);
    switch(p2){
    
        case 1:
        if(b1 == '1')
        b1 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        case 2:
        if(b2 == '2')
        b2 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        case 3:
        if(b3 == '3')
        b3 ='o';
        else{
            printf("invalid\n");
        }
        break;
        case 4:
        if(b4 == '4')
        b4 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        case 5:
        if(b5 == '5')
        b5 = 'o';
        else{
            printf("invaid\n");
        }
        break;
        case 6:
        if(b6 == '6')
        b6 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        case 7:
        if(b7 == '7')
        b7 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        case 8:
        if(b8 == 8)
        b8 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        case 9:
        if(b9 == '9')
        b9 = 'o';
        else{
            printf("invalid\n");
        }
        break;
        default:
        printf("INVALID INPUT\n");
    }   
    printf("Tik Tac Toe _______");
    printf("\n%c  | %c  | %c\n",b1,b2,b3);
    printf("---|--- |---");
    printf("\n%c  | %c  | %c\n",b4,b5,b6);
    printf("---|--- |---");
    printf("\n%c  | %c  | %c\n",b7,b8,b9);
    printf("---|--- |---");
    if ((b1==b2&&b2==b3)||(b4==b5&&b5==b6)||(b7==b8&&b8==b9)||(b1==b4&&b4==b7)||(b2==b5&&b5==b8)||(b3==b6&&b6==b9)||(b1==b5&&b5==b9)||(b3==b5&&b5==b7)){
            printf("\nPlayer 2%d (%c) WINS!\n", mark);
    return 0;
    }
    
    
    // 9 move
                 printf("Enter the value of 1 player =");
     scanf("\n%d",&p1);
    
    switch(p1)
    {
        
        case 1:
        if (b1  = '1')
        b1 ='x';
       else{
           printf("invalid\n");
       } 
        
       
        break;
        case 2:
        if (b2 == '2')
        b2 = 'x';
        else{
            printf("invalid\n");
            
        }
        break;
        case 3:
        if(b3 == '3')
        b3 ='x';
        else{
            printf("invalid\n");
        }
        break;
        case 4:
        if(b4 == '4')
        b4 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 5:
        if(b5 == '5')
        b5 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 6:
        if(b6 == '6')
        b6 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 7:
        if(b7 == '7')
        b7 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 8:
        if(b8 == '8')
        b8 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        case 9:
        if(b9 == '9')
        b9 = 'x';
        else{
            printf("invalid\n");
        }
        break;
        default:
        printf("INVALID INPUT\n");
    } 
    printf("Tik Tac Toe _______");
    printf("\n%c  | %c  | %c\n",b1,b2,b3);
    printf("---|--- |---");
    printf("\n%c  | %c  | %c\n",b4,b5,b6);
    printf("---|--- |---");
    printf("\n%c  | %c  | %c\n",b7,b8,b9);
    printf("---|--- |---");
    if ((b1==b2&&b2==b3)||(b4==b5&&b5==b6)||(b7==b8&&b8==b9)||(b1==b4&&b4==b7)||(b2==b5&&b5==b8)||(b3==b6&&b6==b9)||(b1==b5&&b5==b9)||(b3==b5&&b5==b7)){
    printf("\nPlayer 1  (%c) WINS!\n", mark);
    return 0;
    }
    
    printf("DRaw game");
    
    return 0;
    
}
    
   
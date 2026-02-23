#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int choice;

	do {
    printf("====================================");
    printf("\nWelcome to the Tic Tac Toe game");
    printf("\nMain Menu");
    printf("\n1. Start the game");
    printf("\n2. Search Game History");
    printf("\n3. Show Statistics");
    printf("\n4. Exit");
    
    scanf("\n%d", &choice);
    getchar();
    
    if(choice == 1){
    	char p1[50],p2[50];
    	// name in upper case;
    	printf("Enter the name of the first player");
    	fgets(p1,sizeof(p1),stdin);
    	printf("Enter the name of the second player");
    	fgets(p2,sizeof(p2),stdin);
    	
    	for(int i = 0; p1[i] != '\0'; i++){
    		p1[i]=toupper(p1[i]);
		}
		for(int i = 0; p2[i] != '\0'; i++){
			p2[i]=toupper(p2[i]);
		}
		//inintilize the 4x4 grid matrics for the game
		int num=1;
		char arr[4][4];
		for(int i = 0; i < 4; i++){
			for(int j = 0; j < 4; j++){
				arr[i][j]=num++;
			}
		}
		int turn,r,c,move;
		char marks;
		for(turn = 1; turn<=16; turn++){
			 printf("\n======= 4x4 GRID =======\n");
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++)
                if(arr[i][j] == 'X' || arr[i][j] == 'O') {
    printf("| %c ", arr[i][j]);
} else {
    printf("| %2d ", arr[i][j]);
}

                   
                printf("|\n-------------------------\n");
            }
            if(turn % 2 == 1){
            	marks = 'X';
            	printf("%s person (X) Enter the move:",p1);
			}
			else{
				marks = 'O';
				printf("%s person (O) Enter the move:",p2);
			}
			scanf("%d", &move);
			if(move < 1 || move > 16){
				printf("invalid input:");
				turn--;
				continue;
			}
			
			r = (move-1)/4;
			c = (move-1)%4;
			if(arr[r][c]=='X' || arr[r][c]=='O'){
                printf("Already taken try again.");
                turn--;
            }
            else{
                arr[r][c]= marks;
            }
            int winner_found=0;
            {
            	for(int i = 0; i < 4; i++){
            		if(arr[i][0]==arr[i][1]&& arr[i][1]==arr[i][2]&& arr[i][2]==arr[i][3]){
            		winner_found= 1;
            		break;
            	}
				}
				for(int j = 0; j < 4; j++){
					if(arr[0][j]==arr[1][j]&&arr[1][j]==arr[2][j]&&arr[2][j]==arr[3][j]){
					
					winner_found= 1;
					break;
				}
				}
				if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[2][2] == arr[3][3])
        winner_found=1;

    // Diagonal 2
    if (arr[0][3] == arr[1][2] && arr[1][2] == arr[2][1] && arr[2][1] == arr[3][0])
        winner_found=1;
			}
		if (winner_found==1) {
                printf("\nWinner Found!\n");

                if (marks == 'X')
                    printf("%s Wins!\n", p1);
                else
                    printf("%s Wins!\n", p2);
                
        
         FILE *fp;
     fp = fopen("game_log.txt","a");
     if(fp==NULL){
        printf("NOt Found");
     }
     else{
        printf("Found");
         fprintf(fp, "%s , %s , %d\n", p1, p2, turn);
            fclose(fp);
     }
	 break;	
}
if (turn==16){
	printf("Game draw !:");
	FILE *fp;
     fp = fopen("game_log.txt","a");
     if(fp==NULL){
        printf("NOt Found");
     }
     else{
        printf("Found");
         fprintf(fp, "%s , %s, %d\n", p1, p2, turn);
            fclose(fp);
        }
}

		}
		
			}
       else if(choice == 2){
    char search[50];
    int found = 0;
    int turns;

    printf("Enter the name of the player to search: ");
    fgets(search, sizeof(search), stdin);
    
    // Remove trailing newline
    search[strcspn(search, "\n")] = 0;

    // Convert search string to lowercase
    for(int i = 0; search[i]; i++)
        search[i] = tolower(search[i]);

    FILE *fp = fopen("game_log.txt", "r");
    if(fp == NULL){
        printf("No game history found!\n");
        return 0;
    }

    char p1[50], p2[50], winner[50];

    printf("\nPlayer1 | Player2 | Winner | Turns\n");
    printf("------------------------------------\n");

    while(fscanf(fp, "%s %s %s %d", p1, p2, winner, &turns) != EOF){
        char lp1[50], lp2[50], lwinner[50];
        
        strcpy(lp1, p1);
        strcpy(lp2, p2);
        strcpy(lwinner, winner);

     
        for(int i = 0; lp1[i]; i++) lp1[i] = tolower(lp1[i]);
        for(int i = 0; lp2[i]; i++) lp2[i] = tolower(lp2[i]);
        for(int i = 0; lwinner[i]; i++) lwinner[i] = tolower(lwinner[i]);

     
        if(strstr(lp1, search) || strstr(lp2, search) || strstr(lwinner, search)){
            printf("%-7s | %-7s | %-6s | %d\n", p1, p2, winner, turns);
            found = 1;
        }
    }

    if(!found){
        printf("No matching record found!\n");
    }

    fclose(fp);
    printf("\nPress Enter to go back to Main Menu...");
    getchar(); 

          
       }
        
else if(choice == 3){
    FILE *fp;
    fp = fopen("game_log.txt", "r");

    if(fp == NULL){
        printf("File not found\n");
    } else {
        printf("File found\n");
    }

    char p1[50], p2[50], winner[50];
    int turns;

    char players[100][50];
    int wins[100] = {0};
    int games[100] = {0};
    int totalplayers = 0;

    while(fscanf(fp, "%s %s %s %d", p1, p2, winner, &turns) != EOF){
        // Process player 1
        int index = -1;
        for(int i=0; i<totalplayers; i++){
            if(strcmp(players[i], p1) == 0){
                index = i;
                break;
            }
        }
        if(index == -1){
            strcpy(players[totalplayers], p1);
            games[totalplayers] = 1;
            wins[totalplayers] = 0;
            totalplayers++;
        } else {
            games[index]++;
        }

        // Process player 2
        index = -1;
        for(int i=0; i<totalplayers; i++){
            if(strcmp(players[i], p2) == 0){
                index = i;
                break;
            }
        }
        if(index == -1){
            strcpy(players[totalplayers], p2);
            games[totalplayers] = 1;
            wins[totalplayers] = 0;
            totalplayers++;
        } else {
            games[index]++;
        }

        // Process winner
        index = -1;
        for(int i=0; i<totalplayers; i++){
            if(strcmp(players[i], winner) == 0){
                index = i;
                break;
            }
        }
        if(index != -1){
            wins[index]++;
        }
    }

    fclose(fp);

    // Show top 3 players
    printf("\nTop 3 Players based on Wins:\n");
    printf("Player Name | Games Played | Wins\n");
    printf("-------------------------------\n");

    for(int j=0; j<3 && j<totalplayers; j++){
        int max_wins = -1;
        int ind = -1;
        for(int i=0; i<totalplayers; i++){
            if(wins[i] > max_wins){
                max_wins = wins[i];
                ind = i;
            }
        }
        if(ind != -1){
            printf("%-11s | %-12d | %d\n", players[ind], games[ind], wins[ind]);
            wins[ind] = -1; // So this player is not picked again
        }
    }
    printf("\nPress Enter to go back to Main Menu...");
    getchar();
}

else{
    printf("Exiting you from the game\n");
    exit(0);

}


    }while(1);
return 0;

}
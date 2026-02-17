/*
---------------------------------------------------------------
                 ELECTRONIC VOTING SYSTEM - C PROGRAM
---------------------------------------------------------------
Author : Asrith
CSE,PVP SIDDHARDHA INSTITUTE OF TECHNOLOGY
Language    : C
Description : 
    This program simulates a simple electronic voting system.
    It allows 100 voters to cast their votes for 5 different 
    political parties. The system validates voter ID, prevents 
    duplicate voting, counts votes, and requires a security PIN 
    to display the final election.results.*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>       
int main()
{
    int voter_IDs[4] = {0};
    int pin=6633,user_pin;
    int voter_ID,vote,option,tie_count;
    int i=0,max;
    
    int ATTEMPTS_USED=0,MAX_ATTEMPTS=3;
    int count_APPLE=0;
    int count_BANANA=0;
    int count_MANGO=0;
    int count_ORANGE=0;
    int count_NOTA=0;

    time_t start_time = time(NULL);   

    do
    {
        printf("                  WELCOME TO THE VOTING MACHINE                   \n");
        printf("--------------------------------------------------------------\n");
        re:
        printf("Please ENTER your Voter ID (1 to 100): ");
        enter:
          if (scanf("%d", &voter_ID) != 1)
          {
            printf("Invalid input! Voter ID must be a number.\nPlease try again.\n");
            while (getchar() != '\n');
            goto re;   
          }
          if(voter_ID>=1&&voter_ID<=100)
          {
            int flag=0;
            for(int j=0;j<i;j++)
            {
                if(voter_IDs[j]==voter_ID)
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
            {
            printf("You have already voted with this ID.\n\n");
            printf("If not voted---->>>>>contact the election admin.\n");
            printf("RE-ENTER YOUR VOTER_ID:\n");
            goto enter;
            }
            voter_IDs[i] = voter_ID;
                printf("\nThank you, Voter %d. Please select your choice below:\n", voter_ID);
                printf("------------------------------------------------------------\n");
                up:
                printf("Press 1 for APPLE\n");
                printf("Press 2 for BANANA\n");
                printf("Press 3 for MANGO\n");
                printf("Press 4 for ORANGE\n");
                printf("Press 5 for OTHERS - NOTA\n");
                printf("Enter the Choice: ");
                if (scanf("%d", &vote) != 1)
                {
                    printf("Invalid Input! ID must be a number.\n");
                    while (getchar() != '\n');
                    {
                        goto up; 
                    }
                }
            if(vote>=1&&vote<=5)
            {
                switch(vote)
                {
                    case 1:
                    count_APPLE++;
                    printf("\n");
                    printf("\n");
                    printf("You have voted to APPLE\n");
                    printf("Your VOTE has been recorded.\n");
                    printf("\a\a\a\a\a\a\a\a\a\n");
                             printf("\n");
                             printf("TTTTT   H   H   AAAAA   N   N   K   K       Y   Y   OOO   U   U\n");
                             printf("  T     H   H   A   A   NN  N   K  K         Y Y   O   O  U   U\n");
                             printf("  T     HHHHH   AAAAA   N N N   KKK           Y    O   O  U   U\n");
                             printf("  T     H   H   A   A   N  NN   K  K          Y    O   O  U   U\n");
                             printf("  T     H   H   A   A   N   N   K   K         Y     OOO    UUU\n\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("                You may leave Now!             \n");
                    break;
                    case 2:
                    count_BANANA++;
                    printf("\n");
                    printf("\n");
                    printf("You have voted to BANANA\n");
                    printf("Your VOTE has been recorded.\n");
                    printf("\a\a\a\a\a\a\a\a\a\n");
                             printf("\n");
                             printf("TTTTT   H   H   AAAAA   N   N   K   K       Y   Y   OOO   U   U\n");
                             printf("  T     H   H   A   A   NN  N   K  K         Y Y   O   O  U   U\n");
                             printf("  T     HHHHH   AAAAA   N N N   KKK           Y    O   O  U   U\n");
                             printf("  T     H   H   A   A   N  NN   K  K          Y    O   O  U   U\n");
                             printf("  T     H   H   A   A   N   N   K   K         Y     OOO    UUU\n\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("                You may leave Now!             \n");
                    break;
                    case 3:
                    count_MANGO++;
                    printf("\n");
                    printf("\n");
                    printf("You have voted to  MANGO\n");
                    printf("Your VOTE has been recorded.\n");
                    printf("\a\a\a\a\a\a\a\a\a\n");
                             printf("\n");
                             printf("TTTTT   H   H   AAAAA   N   N   K   K       Y   Y   OOO   U   U\n");
                             printf("  T     H   H   A   A   NN  N   K  K         Y Y   O   O  U   U\n");
                             printf("  T     HHHHH   AAAAA   N N N   KKK           Y    O   O  U   U\n");
                             printf("  T     H   H   A   A   N  NN   K  K          Y    O   O  U   U\n");
                             printf("  T     H   H   A   A   N   N   K   K         Y     OOO    UUU\n\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("                You may leave Now!             \n");
                    break;
                    case 4:
                    count_ORANGE++;
                    printf("\n");
                    printf("\n");
                    printf("You have voted to ORANGE\n");
                    printf("Your VOTE has been recorded.\n");
                    printf("\a\a\a\a\a\a\a\a\a\n");
                             printf("\n");
                             printf("TTTTT   H   H   AAAAA   N   N   K   K       Y   Y   OOO   U   U\n");
                             printf("  T     H   H   A   A   NN  N   K  K         Y Y   O   O  U   U\n");
                             printf("  T     HHHHH   AAAAA   N N N   KKK           Y    O   O  U   U\n");
                             printf("  T     H   H   A   A   N  NN   K  K          Y    O   O  U   U\n");
                             printf("  T     H   H   A   A   N   N   K   K         Y     OOO    UUU\n\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("                You may leave Now!             \n");
                    break;
                    case 5:
                    count_NOTA++;
                    printf("\n");
                    printf("You have voted to OTHERS\n");
                    printf("Your VOTE has been recorded.\n");
                    printf("\a\a\a\a\a\a\a\a\a\n");
                             printf("\n");
                             printf("TTTTT   H   H   AAAAA   N   N   K   K       Y   Y   OOO   U   U\n");
                             printf("  T     H   H   A   A   NN  N   K  K         Y Y   O   O  U   U\n");
                             printf("  T     HHHHH   AAAAA   N N N   KKK           Y    O   O  U   U\n");
                             printf("  T     H   H   A   A   N  NN   K  K          Y    O   O  U   U\n");
                             printf("  T     H   H   A   A   N   N   K   K         Y     OOO    UUU\n\n");
                             printf("\n");
                    printf("                You may leave Now!!               \n");
                    break;
               }
           }
           else
           {
               printf("Invalid Choice!\n");
               printf("Please enter a valid choice between(1-5):\n");
               goto up;
           }
         }
         else
           {
               printf("Invalid VOTER_ID\n");
               printf("Re-Enter your VOTER ID:");
               goto enter;
           }
        if (difftime(time(NULL), start_time) >= 300)  
        {
            printf("\n\n***** TIME IS UP! *****\n");
            printf("Voting has been stopped automatically after 5 minutes.\n");
            break;
        }

        sleep(5);
         system("clear");
         i++;
    }while(i<100);

        int a1,a2,a3,a4,a5,x,y;
        a1=count_APPLE;
        a2=count_BANANA;
        a3=count_MANGO;
        a4=count_ORANGE;
        a5=count_NOTA;
        int ms[]={a1,a2,a3,a4,a5};
        for(x=0;x<5;x++)
        {
            for(y=x+1;y<5;y++)
            {
                if(ms[y]>ms[x])
                {
                    int temp=ms[x];
                    ms[x]=ms[y];
                    ms[y]=temp;
                }
            }
        }
        printf("Voting has finished!\n");
        printf("---------------------\n");
        printf("Press 1 to VIEW RESULTS (admin only)\n");
        printf("Enter the option: ");
        UY:
         if (scanf("%d", &option) != 1)
                {
                    printf("Invalid Input! option Must be 1.\n");
                    printf("Please Re-Enter the Option (1): ");
                    while (getchar() != '\n');
                    {
                        goto UY;
                    }
                }
        system("clear");
        if(option==1)
        {
            while(ATTEMPTS_USED<MAX_ATTEMPTS)
            {
                in:
                pin:
                sleep(1);
                printf("ADMIN: Enter the authentication PIN to view results: ");
                scanf("%d",&user_pin);
                if(user_pin==pin)
                {
                    system("clear");
                    printf("\n--- Election Results ---\n");
                    printf("APPLE     : %d votes\n", count_APPLE);
                    printf("BANANA    : %d votes\n", count_BANANA);
                    printf("MANGO     : %d votes\n", count_MANGO);
                    printf("ORANGE    : %d votes\n", count_ORANGE);
                    printf("NOTA      : %d votes\n", count_NOTA);
                          int arr[5] = {count_APPLE, count_BANANA, count_MANGO, count_ORANGE, count_NOTA};
                           tie_count = 0;
                           max=ms[0];
                          for (int i = 0; i < 5; i++)
                          if (arr[i] == max)
                           tie_count++;

                           if (tie_count > 1)
                          {
                            printf("TIE between the following parties:\n");

                            if (count_APPLE == max)      printf(" - APPLE\n");
                            if (count_BANANA == max)     printf(" - BANANA\n");
                            if (count_MANGO == max)      printf(" - MANGO\n");
                            if (count_ORANGE == max)     printf(" - ORANGE\n");
                            printf("No single winner due to TIE.\n"); 
                          }
                          else
                          {
                                if (max == count_APPLE) printf("WINNER : APPLE\n");
                                else if (max == count_BANANA) printf("WINNER : BANANA\n");
                                else if (max == count_MANGO) printf("WINNER : MANGO\n");
                                else if (max == count_ORANGE) printf("WINNER : ORANGE\n");
                                else printf("WINNER : NOTA (No party received majority\n");
                                    printf("MAJORITY : %d",ms[0]-ms[1]);
                          }
                             printf("\nRESULT HAS BEEN ANNOUNCED!\n");
                             printf("\a\a\a\a\a\a\a\a\a\n");
                             printf("\n");
                             printf("TTTTT   H   H   AAAAA   N   N   K   K       Y   Y   OOO   U   U\n");
                             printf("  T     H   H   A   A   NN  N   K  K         Y Y   O   O  U   U\n");
                             printf("  T     HHHHH   AAAAA   N N N   KKK           Y    O   O  U   U\n");
                             printf("  T     H   H   A   A   N  NN   K  K          Y    O   O  U   U\n");
                             printf("  T     H   H   A   A   N   N   K   K         Y     OOO    UUU\n\n");
                             return 0;
                }
                            else    
                            {
                            ATTEMPTS_USED++;
                                if (ATTEMPTS_USED < MAX_ATTEMPTS)
                                {
                                    printf("Wrong PIN. You have %d attempt(s) left.\n", MAX_ATTEMPTS - ATTEMPTS_USED);
                                    goto in;
                                }
                                else
                                {
                                    printf("No ATTEMPTS LEFT!\nACCESS DENIED.\nPLEASE TRY AGAIN AFTER  10 SECONDS!");
                                    printf("\n");
                                   sleep(10);
                                    system("clear");
                                    goto pin;
                                }
                            }
            }
        }
        else
        {
            printf("Invalid Option\n");
            sleep(1);
             printf("Please Re-Enter the Option (1): ");
            goto UY;
        }
        return 0;
}

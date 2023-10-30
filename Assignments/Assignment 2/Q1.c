#include <stdio.h>

int main()
{
	int players, innings, score, t_score, h_score, century, h_century;
	float avg;
	
	printf("Enter the number of batsmen: ");
	scanf("%d", &players);
	printf("\nEnter the number of innings: ");
	scanf("%d", &innings);
	
	int arr[players][innings];
	int c, i;
	
	for(c=0; c<players; c++)
	{
		t_score=0;
		h_score=0;
		century=0;
		h_century=0;
		for(i=0; i<innings; i++)
		{
			printf("Enter the %d inning's score for player %d: ", i+1, c+1);
			scanf("%d", &score);
			t_score+=score;
			if(h_score<score)
			{
				h_score=score;
			}
			if(score>=50 && score<100)
			{
				h_century++;
			}
			if(score>=100)
			{
				century++;
			}
		}
		avg=(t_score)/(innings);
		printf("\nThe total runs scored by player %d are %d", c+1, t_score);
		printf("\nThe highest score scored by player %d is %d", c+1, h_score);
		printf("\nThe centuries scored by player %d are %d", c+1, century);
		printf("\nThe half centuries scored by player %d are %d", c+1, h_century);
		printf("\nThe average score for player %d is %f\n", c+1, avg);
	}
}

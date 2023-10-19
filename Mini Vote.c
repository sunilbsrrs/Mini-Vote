#include <stdio.h>

int bjp=0, congress=0, aap=0, jdu=0;

void election_result(){
	
	int won_by_vote;
	if(bjp>congress && bjp>aap && bjp>jdu){
		printf("\n\tBJP Won the Election.");
		printf("\nTotal Vote of BJP: %d ",bjp);
		won_by_vote=bjp-congress;
		printf("\nBJP won by %d Votes from Congress.",won_by_vote);
		won_by_vote=bjp-aap;
		printf("\nBJP won by %d Votes from AAP.",won_by_vote);
		won_by_vote=bjp-jdu;
		printf("\nBJP won by %d Votes from JDU.",won_by_vote);	
	}
	else if(congress>aap && congress>jdu){
		printf("\n\tCongress Won the Election.");
		printf("\nTotal Vote of Congress: %d ",congress);
		won_by_vote=congress-bjp;
		printf("\nCongress won by %d Votes from BJP.",won_by_vote);
		won_by_vote=congress-aap;
		printf("\nCongress won by %d Votes from AAP.",won_by_vote);
		won_by_vote=congress-jdu;
		printf("\nCongress won by %d Votes from JDU.",won_by_vote);	
	}
	else if(aap >jdu){
		printf("\n\tAAP Won the Election.");
		printf("\nTotal Vote of AAP: %d ",aap);
		won_by_vote=aap-bjp;
		printf("\nAAP won by %d Votes from BJP.",won_by_vote);
		won_by_vote=aap-congress;
		printf("\nAAP won by %d Votes from Congress.",won_by_vote);
		won_by_vote=aap-jdu;
		printf("\nAAP won by %d Votes from JDU.",won_by_vote);	
    }
    else if (bjp== congress && bjp== aap && bjp==jdu)
    {
    	printf("\n\tNo one Won the Election\n");
    	printf("\n         BJP---Congress---AAP---JDU   ");
    	printf("\n          %d     %d         %d     %d   ",bjp,congress,aap,jdu);
	}
	else{
		printf("\n\tJDU Won the Election.");
		printf("\nTotal Vote of JDU: %d ",jdu);
		won_by_vote=jdu-bjp;
		printf("\nJDU won by %d Votes from BJP.",won_by_vote);
		won_by_vote=jdu-congress;
		printf("\nJDU won by %d Votes from Congress.",won_by_vote);
		won_by_vote=jdu-aap;
		printf("\nJDU won by %d Votes from AAP.",won_by_vote);	
	}
}

void calculate_vote(int vote){
	
	switch(vote)
	{
		case 1:
			 bjp+=1;
			 break;
		
		case 2:
			 congress+=1;
			 break;
			 
		case 3: 
		     aap+=1;
		     break;
		     
		case 4: 
		     jdu+=1;
		     break;
	}
	
}

void main()
{
	int choose;
	
	      printf("\t\tWelcome to Mini Voting System: ");
	      printf("\n\t\t       MP Election           ");
	      printf("\n*********************\n\n");
	      printf("|           1. BJP       |        2. Congress     |\n");
	      printf("\n*********************\n");
	      printf("|           3. AAP       |        4. JDU          |\n");
	      printf("\n*********************\n\n");
	      
	do{
		printf("\n\nPress 1 to Vote BJP.\nPress 2 to Vote Congress.\nPress 3 to Vote AAP.\nPress 4 to Vote JDU.\n");
		printf("\nPress 5 to Show Election Result.\nPlease Choose : \n");
		scanf("%d",&choose);
		if (choose==5)
		{
			election_result();
		}
		else
		{
			calculate_vote(choose);
		}
		printf("\n");
	}while(choose!=5);
}

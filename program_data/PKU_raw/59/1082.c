

int day[100][100],n;
int Sick(int i,int j,int c)
{
	int sick = 0;
	if(day[i-1][j] == 0 && i-1>=0)
	{
		day[i-1][j] = c+1;
		sick ++;
	}
	if(day[i+1][j] == 0 && i+1<n)
	{
		day[i+1][j] = c+1;
		sick ++;
	}
	if(day[i][j-1] == 0 && j-1 >= 0)
	{
		day[i][j-1] = c+1;
		sick ++;
	}
	if(day[i][j+1] == 0 && j+1 < n)
	{
		day[i][j+1] = c+1;
		sick ++;
	}
	return sick;
}


int main(){ 

	char people[100];	
	int i,j;
	int c,cday,sick = 0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&people);
		for(j=0;j<n;j++)
		{
			if(people[j] == '#')
				day[i][j] = -1;
			if(people[j] == '@')
			{
				day[i][j] = 1;
				sick++;
			}
		}
	}
	scanf("%d",&cday);

	for(c=1;c<cday;c++)
	{
		for(i=0;i<n;i++){
			for(j=0;j<n;j++)
			{
				if(day[i][j] == c)
					sick += Sick(i,j,c);
			}
		}
	}
	printf("%d\n",sick);	

	return 0;       

} 

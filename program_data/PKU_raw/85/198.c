


int main()
{
    int a;
	char shit[100][100];
	int i,j;
	scanf("%d",&a);
	int m=0;



	for(i=0;i<a;i++)
	{
		scanf("%s",shit[i]);
	}
	for(i=0;i<a;i++)
	{   m=0;
		for(j=0;shit[i][j]!=0;j++)
		{   
			if(((shit[i][j]>=65)&&(shit[i][j]<=90))||((shit[i][j]>=97)&&(shit[i][j]<=122))||((shit[i][j]>=48)&&(shit[i][j]<=57))||(shit[i][j]==95))
			{  continue;
				
			}
			else 
			{ m=1;
			}
		    
			
		}
		if(shit[i][0]>=48&&shit[i][0]<=57)
				m=1;
		if(m==0)
		{
		printf("yes\n");
		}
		else if(m==1)
		{
			printf("no\n");
		}
	}
	return 0;
}



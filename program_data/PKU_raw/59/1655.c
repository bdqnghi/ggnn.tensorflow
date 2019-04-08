	
int main()
{
	int n=0;
	cin>>n;
	char room1[100][100];
	char room2[100][100];

	for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin>>room1[i][j];
		        room2[i][j]=room1[i][j];
		}
	}
	int m=0;
	cin>>m;
	
	
 for(int k=1;k<m;k++)       
	{
		for(int i=1;i<=n;i++)
		  for(int j=1;j<=n;j++)
		    if(room1[i][j]=='@')
			{ 
				if(room1[i-1][j]=='.')
					room2[i-1][j]='@';
				if(room1[i+1][j]=='.')
					room2[i+1][j]='@';
				if(room1[i][j-1]=='.')
					room2[i][j-1]='@';
				if(room1[i][j+1]=='.')
					room2[i][j+1]='@';
             }
          
		  
		  for(int a=1;a<=n;a++)  
		     for(int b=1;b<=n;b++)
				 room1[a][b]=room2[a][b];
		
		}

         int number=0;
		 for(int a=1;a<=n;a++)  
		     for(int b=1;b<=n;b++)
				 if(room1[a][b]=='@')
					 number++;

		 cout<<number<<endl;
		
		 return 0;



}

int a[102][102];
int flag[102][102];
int row;
int col;



int go(int f,int i,int j,int count)
{    
	if(count!=col*row)
		
{		cout<<a[i][j]<<endl;
			flag[i][j]=1;
			
	if(f==0)
	{
		if(flag[i][j+1]==0)
		             go(f,i,j+1,count+1);
		else  go((f+1)%4,i+1,j,count+1);
	}
		
	 if(f==1) 
		{
			if(flag[i+1][j]==0)
				go(f,i+1,j,count+1);
			else  go((f+1)%4,i,j-1,count+1);
	   }
	 if(f==2)
	{
		if(flag[i][j-1]==0)
		     go(f,i,j-1,count+1);
		else go((f+1)%4,i-1,j,count+1);
	}
	 if(f==3)
		{
			if(flag[i-1][j]==0)
				go(f,i-1,j,count+1);
			else
				go((f+1)%4,i,j+1,count+1);
    	}
}
	
	      return 0;

}
int main()
{
	
	
	int i;
	int j;
	cin>>row>>col;
	int turn=0;
	
	for(i=1;i<=row;i++)
		for(j=1;j<=col;j++)
		{
			cin>>a[i][j];
		}
	for(i=0;i<=col+1;i++)
	{
		flag[0][i]=1;
		flag[row+1][i]=1;
	}
	for(i=0;i<=row+1;i++)
	{
		flag[i][0]=1;
		flag[i][col+1]=1;
	}
	  

	go(0,1,1,0);
}
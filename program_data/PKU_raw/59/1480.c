/**  
* @file   ????  .cpp  
* @author ??? 
* @date   2013-11-01  * @description 
*          ??????:????    */ 
int main()
{
	char a[101][101];
	char b;
	int N;
	int d=1;
	int m ;
	int number=0;
	cin>>N;
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cin>>b;
			a[i][j]=b;
		}
	}
	cin>>m;
	while( d<m)
	{
	    for(int i=0;i<N;i++)
	    {
		   for(int j=0;j<N;j++)
		   {
			   if(a[i][j]=='@')
			   {
				if(a[i][j+1]=='.')
					a[i][j+1]='!';
				if(a[i+1][j]=='.')
					a[i+1][j]='!';
				if(a[i][j-1]=='.')
					a[i][j-1]='!';
				if(a[i-1][j]=='.')
					a[i-1][j]='!';
			    }
		    }
	     }
	   for(int i=0;i<N;i++)
	  {
		for(int j=0;j<N;j++)
		{
			if(a[i][j]=='!')
				a[i][j]='@';
		}
	   }
	   d++;
	}
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(a[i][j]=='@')
				number++;
		}
	}
	 cout<<number<<endl;
	  return 0;
}


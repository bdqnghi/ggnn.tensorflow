int main()
{
  int i,j,k,n,m,liu=0,count[101][101];
  char a[101][101];
  cin>>n;
  for (i=0;i<n;i++)
	  for(j=0;j<n;j++)
	  {   
			cin>>a[i][j];
            if(a[i][j]=='@')
			  liu+=1;
	  }
cin>>m;
for(k=m;k>1;k--)
{    
	for (i=0;i<n;i++)
	  for(j=0;j<n;j++)
		  count[i][j]=0;
	for (i=0;i<n;i++)
	  for(j=0;j<n;j++)
		  if((a[i][j]=='@')&&(count[i][j]==0))
			{  if((i>0)&&(a[i-1][j]=='.'))
				{  
					liu+=1;
	               a[i-1][j]='@';
				   count[i-1][j]=1;
	            }
			  if((j>0)&&(a[i][j-1]=='.'))
				{  
					liu+=1;
	               a[i][j-1]='@';
				   count[i][j-1]=1;
	            }
			  if((i+1<n)&&(a[i+1][j]=='.'))
				{  
					liu+=1;
	               a[i+1][j]='@';
				   count[i+1][j]=1;
	            }
			  if((j+1<n)&&(a[i][j+1]=='.'))
				{  
					liu+=1;
	               a[i][j+1]='@';
				   count[i][j+1]=1;
	            }
		    }
}
cout<<liu<<endl;
return 0;
}
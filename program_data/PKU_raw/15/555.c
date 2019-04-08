
int main()
{   int a1,a2,b1,b2,n,i,j,s;
    a1=0;a2=0;b1=0;b2=0;
    int x[100][100];
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{  for(j=0;j<n;j++)
	   {scanf("%d",&x[i][j]);}
	}

	for(i=0;i<n;i++)
    for(j=0;j<n;j++)
	   {if(x[i][j]==0)
	   {a1 = i;b1 = j;
	     break;}
	  if(x[a1][b1]==0)
	  {break;}
	}
	
    
     	for(i = n - 1;i>=0;i--)
	    for(j=n-1;j>=0;j--)
	   {if(x[i][j]==0)
	   {a2 = i;b2 = j;
	     break;}
	  if(x[a2][b2]==0)
	  {break;}
	}

    s = (a2 - a1 -1) * (b2 - b1 -1);
	
	printf("%d\n",s);
	return 0;
}
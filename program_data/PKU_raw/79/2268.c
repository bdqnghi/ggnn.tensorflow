int num(int n,int m);
void main()
{   int x,y;
	while(scanf("%d%d",&x,&y)==2)
	{
       if(x==0&&y==0)
		   break;
	  else
		  printf("%d\n",num(x,y));
	  

	}




}

int num(int n,int m)
{
	int x=0,i=0,flag=0;
	int str[301];


	for(i=1;i<=n;i++)
		str[i]=1;
	while(flag<n)
	{
		i=1;
		for(i=1;i<=n;i++)
		{
			if(str[i]==1)
			{	x+=1;
		    	if(x==m)
				{
				  str[i]=0;
		   	      x=0;
			      flag+=1;
				}
			}
			if(flag==n)
			{
			    return(i);
				break;
			}

		}
	}
	



}
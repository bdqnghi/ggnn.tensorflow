int main()
{
    
	int n,i,first,second,third,x,y,z;
	scanf("%d",&n);
	struct mark{
		int ID,chinese,math,sum;
	}*num;
	num=(struct mark*)malloc(sizeof(mark)*n);
	int n1,c1,m1;
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&n1,&c1,&m1);
		num[i].ID =n1;
		num[i].chinese =c1;
		num[i].math=m1;
		num[i].sum=c1+m1;
	}
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			first=num[i].sum;
			second=num[i].sum;
			third=num[i].sum;
			x=num[i].ID;
			y=num[i].ID;
			z=num[i].ID ;
		}
		else if(i==1)
		{
			if(num[i].sum>first)
			{
				first=num[i].sum;
			    x=num[i].ID;
			}
			else
			{
				third=num[i].sum;
				z=num[i].ID;
			}
			    
		}
		else 
		{
			if(num[i].sum>first)
			{
				third=second;
                z=y;
				second=first;
				y=x;
				first=num[i].sum;
				x=num[i].ID;
			}	
			else if(num[i].sum>second)
			{
				third=second;
			    z=y;
				second=num[i].sum;
				y=num[i].ID;
			}
			else if(num[i].sum>third)
			{
				third=num[i].sum;
				z=num[i].ID;
			}
		}
	}
	printf("%d %d\n%d %d\n%d %d\n",x,first,y,second,z,third);
	return 0;
}
int win,loose;
main()
{
	void input(int * p1,int x);
	void f(int*p1,int*p2,int x);
	int n,t[num],w[num];
	scanf("%d",&n);
	while(n!=0)
	{
		input(t,n);
		input(w,n);
		win=loose=0;
		f(t,w,n);
		printf("%d\n",win*reward-loose*reward);
		scanf("%d",&n);
	}
}
void f(int*p1,int*p2,int x)
{
	int a1,a2,b1,b2;
	a1=*p1;b1=*p2;
	if (x==1) 
	{
		if (a1>b1)
			win++;
		else
		{
			if (a1<b1)
				loose++;
		}
	}
	else
	{
		a2=*(p1+x-1);b2=*(p2+x-1);
		if (a2<b2)
		{
			loose++;
			f(p1,p2+1,x-1);
		}
		else
		{
			if (a2>b2)
			{
				win++;
				f(p1,p2,x-1);
			}
			else
			{
				if (a1>b1)
				{
					win++;
					f(p1+1,p2+1,x-1);
				}
				else
				{
					if (a1<b1)
					{
						loose++;
						f(p1,p2+1,x-1);
					}
					else
					{
						if (b1>a2)
							loose++;
						f(p1,p2+1,x-1);
					}
				}
			}
		}
	}

}

void input(int * p1,int x)
{
	int i,j,c;
	for (i=0;i<x;i++)
	{
		scanf("%d",p1+i);
	}
	for (i=0;i<x-1;i++)
	{
		for (j=i;j<x;j++)
		{
			if (*(p1+i)<*(p1+j))
			{c=*(p1+i);*(p1+i)=*(p1+j);*(p1+j)=c;
			}
		}
	}
}
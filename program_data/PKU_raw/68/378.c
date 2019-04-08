int main()
{
	int check(double x,double y);//??????x?y?????
	int n,a=0,b=0,answer;
    scanf("%d",&n);
	int k=6;
	while(k<=n)//k???6~n???
	{
		int i=2;
		while(i<=k/2)
		{
			a=i;
			b=k-i;
			answer=check(a,b);
			if(answer==1)//answer??1?????
			{
				printf("%d=%d+%d\n",k,a,b);//????
				break;
			}
			else
				if(i==2)
					i=i+1;
				else
					i=i+2;
		}
		k=k+2;
	}
}

int check(double x,double y)
{
	int d1=0,d2=0;
	int i=2;
	int answer;
	while(i<=sqrt(x))
	{
		if((int)x%i==0)
		{
			d1=1;
			break;
		}
		else
			i++;
	}//????x?????
	i=2;
	while(i<=sqrt(y))
	{
		if((int)y%i==0)
		{
			d2=1;
			break;
		}
		else
			i++;
	}//????y?????
	if(d1==0&&d2==0)
		answer=1;
	else
		answer=0;
	return answer;//??x???d1=0?y????d2=0?????0????1?????0
}


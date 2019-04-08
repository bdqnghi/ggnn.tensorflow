//?????
void main()
{
	int week(int w,int n);
	int w,i,r=0,unlucky[12];

	scanf("%d",&w);
	
	if(week(w,13)==5)
	{
		unlucky[r]=1;
		r++;
	}
	if(week(w,44)==5)
	{
		unlucky[r]=2;
		r++;
	}
	for(i=3;i<=7;i++)
	{
		if(i%2!=0)
		{
			if(week(w,13+31*(i-1)/2+28+30*(i-3)/2)==5)
			{
				unlucky[r]=i;
				r++;
			}
		}
		else
		{
			if(week(w,13+31*i/2+28+(i-4)*15)==5)
			{
				unlucky[r]=i;
				r++;
			}
		}
	}
	for(i=8;i<=12;i++)
	{
		if(i%2!=0)
		{
			if(week(w,225+31*(i-7)/2+(i-9)*15)==5)
			{
				unlucky[r]=i;
				r++;
			}
		}
		else
		{
			if(week(w,225+31*(i-8)/2+15*(i-8))==5)
			{
				unlucky[r]=i;
				r++;
			}
		}
	}

	for(i=0;i<r;i++)
		printf("%d\n",unlucky[i]);
}

int week(int w,int n)
{
	int t,i;
	t=(n-1)%7;
	i=t+w;
	if(i>7)
		return(i-7);
	else
		return(i);
}

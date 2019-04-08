
int two(int n)   //?2?n??
{
	int i,sum=1;
	for(i=1;i<=n;i++)
	{
		sum=sum*2;
	}
	return sum;
}

int pand(int x)  //??x????
{
	int i,sign=0,m;
	for(i=1;sign==0;i++)
	{
		if(x>=two(i)&&x<two(i+1))
		{m=i+1;
		 sign=1;}
	}
	return m;
}


int main()
{
	int result,i,sign=0;
	int x,y,lx,ly;
	int xx[20],yy[20];
	scanf("%d%d",&x,&y);
	if(x==1||y==1)
	result=1;
	else if(x==y)
		result=x;
	else
	{
		lx=pand(x);
		ly=pand(y);
		xx[lx-1]=x;
		yy[ly-1]=y;
		for(i=2;i<=lx;i++)
		{
			xx[lx-i]=x/2;
			x=x/2;
		}
		for(i=2;i<=ly;i++)
		{
			yy[ly-i]=y/2;
			y=y/2;
		}

		for(i=0;sign==0;i++)
		{
			if(xx[i]!=yy[i])
			{sign=1;
			 result=xx[i-1];}
		}

	}

	printf("%d",result);
	
	return 0;
}




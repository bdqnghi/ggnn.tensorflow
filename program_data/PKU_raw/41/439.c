

int f1(int d[])
{
	if(d[0]==1||d[0]==2)
	{
		if(d[4]==1)
			return 0;
		else
			return 1;
	}
	else
	{
		if(d[4]==1)
			return 1;
		else
			return 0;
	}
}
int f2(int d[])
{
	if(d[1]==1||d[1]==2)
	{
		if(d[1]==2)
			return 0;
		else
			return 1;
	}
	else
	{
		if(d[1]==2)
			return 1;
		else
			return 0;
	}
}
int f3(int d[])
{
	if(d[2]==1||d[2]==2)
	{
		if(d[0]==5)
			return 0;
		else
			return 1;
	}
	else
	{
		if(d[0]==5)
			return 1;
		else
			return 0;
	}
}
int f4(int d[])
{
	if(d[3]==1||d[3]==2)
	{
		if(d[2]!=1)
			return 0;
		else
			return 1;
	}
	else
	{
		if(d[2]!=1)
			return 1;
		else
			return 0;
	}
}
int f5(int d[])
{
	if(d[4]==2||d[4]==3)
		return 1;
	else if(d[4]==1)
	{
		if(d[3]==1)
			return 0;
		else
			return 1;
	}
	else
	{
		if(d[3]==1)
			return 1;
		else
			return 0;
	}
}





void main()
{
	int i,j,k,l,m,mark=1,c[5]={1,2,3,4,5},d[5];
	for(i=0;i<5;i++)
	{
		d[0]=c[i];
		for(j=0;j<5;j++)
		{
			if(j==i)
				continue;
			d[1]=c[j];
			for(k=0;k<5;k++)
			{
				if(k==i||k==j)
					continue;
				d[2]=c[k];
				for(l=0;l<5;l++)
				{
					if(l==i||l==j||l==k)
						continue;
					d[3]=c[l];
					for(m=0;m<5;m++)
					{
						if(m==i||m==j||m==k||m==l)
							continue;
						d[4]=c[m];
						if(mark)
						{
							if(mark=f1(d))
								continue;
							if(mark=f2(d))
								continue;
							if(mark=f3(d))
								continue;
							if(mark=f4(d))
								continue;
							if(mark=f5(d))
								continue;
						}
						if(mark==0)
								break;
					}
					if(mark==0)
						break;
				}
				if(mark==0)
					break;
			}
			if(mark==0)
				break;
		}
		if(mark==0)
			break;
	}
	printf("%d %d %d %d %d\n",d[0],d[1],d[2],d[3],d[4]);
}

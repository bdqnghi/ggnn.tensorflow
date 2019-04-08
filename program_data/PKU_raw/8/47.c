int b[2][10],e[20]={0},c=0,d=0;
scanning()
{
	scanf("%d %d",&c,&d);
}

scanning_array(int y,int x)
{
	int i;
	for(i=0;i<x;i++)
	{
		scanf("%d",&b[y][i]);
	}
}

void arrange(int m,int a[])
{
	int i,j,t;
	for(i=0;i<m;i++)
		for(j=0;j<m-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
}

combine(int x[],int y[])
{
	int i;
	for(i=0;i<c;i++)
		e[i]=b[1][i];
	for(i=c;i<c+d;i++)
		e[i]=b[2][i-c];
}

print()
{
	int i;
	for(i=0;i<c+d;i++)
	{
		printf("%d",e[i]);
		if(i!=c+d-1)
		printf(" ");
	}
}

void main()
{
	scanning();
	scanning_array(1,c);
	scanning_array(2,d);
	arrange(c,b[1]);
	arrange(d,b[2]);
	combine(b[1],b[2]);
	print();
}






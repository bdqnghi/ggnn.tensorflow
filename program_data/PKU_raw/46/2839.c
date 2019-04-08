int a[2000][2000];

void print(int h,int l)
{
    int i,j;
	for(j=0;j<l;j++)
	{printf("%d\n",a[0][j]);}
	for(i=1;i<h;i++)
	{printf("%d\n",a[i][l-1]);}
	for(j=l-2;j>=0;j--)
	{printf("%d\n",a[h-1][j]);}
	for(i=h-2;i>0;i--)
	{printf("%d\n",a[i][0]);}
}
void gai(int h,int l)
{
	int i,j;
	for(i=0;i<h-1;i++)
	{
		for(j=0;j<l-2;j++)
		{
			a[i][j]=a[i][j+1];
		}
	}
	for(j=0;j<l-2;j++)
	{
		for(i=0;i<h-2;i++)
		{
			a[i][j]=a[i+1][j];
		}
	}
}

void main()
{
	int i,j,h,l;
	scanf("%d %d",&h,&l);
	for(i=0;i<h;i++)
	{
		for(j=0;j<l;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for( ;(h>1&&l>1);h=h-2,l=l-2)
	{
		print(h,l);
	    gai(h,l);
	}
	
	if(h==1&&l>1)
	{
		for(j=0;j<l;j++) printf("%d\n",a[0][j]);
	}
	else if(l==1&&h>1)
	{
        for(i=0;i<h;i++) printf("%d\n",a[i][0]);
	}
	else if(h==1&&l==1)
	{
		printf("%d\n",a[0][0]);
	}
}
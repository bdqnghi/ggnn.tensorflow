
int main()
{
	int n;
	scanf("%d",&n);
	if(n>0){
	struct a
	{
		char y[30];
		int x,l; 
	}a[1000];
	struct b
	{
		char y;
		int x; 
	}b[26];
	int i,j,p;
	char k;
	for(i=0;i<n;i++)
	{
		scanf("%d %s",&a[i].x,&a[i].y);
		a[i].l=strlen(a[i].y);
	}
	for(i=0;i<=25;i++)
	{
		b[i].y=i+65;
		b[i].x=0;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<a[i].l;j++)
		{
			for(k=65;k<=90;k++)
			{
				if(a[i].y[j]==k)b[k-65].x=b[k-65].x+1;	
			}
		}
	}
	int max=b[0].x;
	for(i=0;i<=25;i++)
	{
		if(b[i].x>max)max=b[i].x;
	}
	for(i=0;i<=25;i++)
	{
		if(b[i].x==max)
		{
			printf("%c\n",b[i].y);
			printf("%d\n",b[i].x);
			for(j=0;j<n;j++)
			{
				for(p=0;p<a[j].l;p++)
				{
					if(a[j].y[p]==b[i].y)
					{printf("%d\n",a[j].x);break;}
				}
			}
			break;
		}
	}
	}
	return 0;
}
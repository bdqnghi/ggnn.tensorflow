
int main()
{
	int i,j,s,h,l,n,a,e;
	int t[100];
	scanf("%d",&n);
	s=0;

	for(i=0;i<100;i++)
		t[i]=0;

	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&h,&l);
		if((h<=140)&&(h>=90)&&(l<=90)&&(l>=60))
		{
			s++;
			t[i-1]=s;
		}
		else
			s=0;
	}

	for(i=1;i<100;i++)
	{
		for(j=0;j<100-i;j++)
		{
			if(t[j]>t[j+1])
			{
				e=t[j];
				t[j]=t[j+1];
				t[j+1]=e;
			}
		}
	}

	printf("%d\n",t[99]);
	return 0;
}
void f1(int a[],int e);
void f2(int b[],int f);
void f3(int c[],int h,int d[],int l);
void main()
{
	int shuzu1[200],shuzu2[200];
	int geshu1,geshu2;
	scanf("%d%d",&geshu1,&geshu2);
	f1(shuzu1,geshu1);
	f1(shuzu2,geshu2);
	f2(shuzu1,geshu1);
	f2(shuzu2,geshu2);
	f3(shuzu1,geshu1,shuzu2,geshu2);
}
void f1(int a[],int e)
{
	int i;
	for(i=0;i<e;i++)
	{
		scanf("%d",&a[i]);
	}
}
void f2(int b[],int f)
{
	int k,t,g;
	for (k=0;k<f-1;k++)
	{
		for(t=0;t<f-1;t++)
		{
			if(b[t]>b[t+1])
			{
				g=b[t];
				b[t]=b[t+1];
				b[t+1]=g;
			}
		}
	}
}
void f3(int c[],int h,int d[],int l)
{
	int z;
	for(z=0;z<h;z++)
	{
		printf("%d ",c[z]);
	}
	for(z=0;z<l-1;z++)
	{
		printf("%d ",d[z]);
	}
	printf("%d",d[l-1]);
}


int main()
{
	int n,i,j=0,w=0,k;
	float b[40],c[40],d[40],e;
	char a[40][7];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%f",a[i],&b[i]);
		if(strcmp(a[i],"male")==0)
		{
			c[j]=b[i];
			j++;
		}
		if(strcmp(a[i],"female")==0)
		{
			d[w]=b[i];
			w++;
		}
	}
for(k=1;k<=j;k++)
{
	for(i=0;i<j-k;i++)
	{
		if(c[i]>c[i+1])
		{
			e=c[i+1];
			c[i+1]=c[i];
			c[i]=e;
		}
	}
}

for(k=1;k<=w;k++)
{
	for(i=0;i<w-k;i++)
	{
		if(d[i]<d[i+1])
		{
			e=d[i+1];
			d[i+1]=d[i];
			d[i]=e;
		}
	}
}
printf("%.2f",c[0]);
for(i=1;i<j;i++)
{printf(" %.2f",c[i]);}
for(i=0;i<w;i++)
{printf(" %.2f",d[i]);}
return 0;
}
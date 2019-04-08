int main()
{int *p,k,j,i,a[100000],n,m=0;
p=a;
scanf("%d",&n);
for (i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d",&k);
for (i=0;i<n;i++)
{
	if(*(p+i)==k)
	{
		while(*(p+i)==k)
		{
			for (j=i;j<n-m;j++)
				a[j]=a[j+1];
			m=m+1;
		}
	
	
	}
	
	
}

for (i=0;i<n-m-1;i++,p++)
printf("%d ",*p);

printf("%d",*p);


}

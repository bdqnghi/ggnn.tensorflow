
void main()
{
int n,a[20001],t,i,m;
scanf("%d",&n);
for (i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for (i=0;i<n;i++)
{
	m=1;
	for(t=0;t<i;t++)
	{
		if(a[i]==a[t])
		{
			m=0;
		}
	}
	if(m==1)
	{
	 if(i>0)
	 {
	 printf(" ");
	 }
     printf("%d",a[i]);

	}

}
} 
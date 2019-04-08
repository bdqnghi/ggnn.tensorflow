int main()
{
int i,j,n,p=0,m[20000];
scanf("%d\n",&n);
for(i=0;i<n;i++)
scanf("%d",&m[i]);
for(i=0;i<n;i++)
{
	j=0;
	while(j<i)
	{
		if(m[i]==m[j])
			break;
		j++;
	}
	if(j==i)
	{
	if((i<n)&&(i>0))
		printf(" ");
	printf("%d",m[i]);
	p++;
	}
}
return 0;
}
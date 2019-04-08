int main()
{
	int a[1000],n;
	char c;
	int i,j,t,k;
	k=0;
	n=0;
	while(true)
	{
		scanf("%d",&a[n++]);
		scanf("%c", &c);
		if(c == '\n')
			break;
	}
	if(n==1)
		printf("No");
	else
	{{for(j=0;j<n-1;j++)
		{
			for(i=0;i<n-1-j;i++) 
			{
				if(a[i]>a[i+1])
				{t=a[i];a[i]=a[i+1];a[i+1]=t;}
			} 
	}}

for(i=n-2;i>=0;i--)
{if(a[i]<a[n-1])
{ printf("%d",a[i]);
break;}}
for(i=n-2;i>=0;i--)
{if(a[i]==a[n-1])
k=k+1;
}
if(k==n-1)
printf("No");}
	return 0;
}
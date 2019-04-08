int main()
{
	int x,y,i,j;
	int a[20],b[20];
	scanf("%d %d",&x,&y);
	{a[0]=x;b[0]=y;
     for(i=1;i<=10;i++)
	 {if(x%2!=0)  {x=(x-1)/2; a[i]=x;continue;}
	 if(x%2==0)  {x=x/2;   a[i]=x;}}
	for(j=1;j<=10;j++)
	{if(y%2!=0)  {y=(y-1)/2; b[j]=y;continue;}
	if(y%2==0)  {y=y/2;   b[j]=y;}}
	for(i=0;i<=10;i++)
	{for(j=0;j<=10;j++)
	if(a[i]==b[j])  {printf("%d\n",a[i]);i=11;j=11;}}}
	return 0;
}
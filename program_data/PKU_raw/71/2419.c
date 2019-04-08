int a[20];
main()
{
	void run(int x,int y);
	void ping(int x,int y);
	int n,i,j,k,year,y,r;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&year,&y,&r);
		if(year%400==0||(year%4==0&&year%100!=0))
		run(y,r);
		else ping(y,r);
	} 
}
void run(int x,int y)
{
	a[1]=a[3]=a[5]=a[7]=a[8]=a[10]=a[12]=31;
	a[4]=a[6]=a[9]=a[11]=30;
	a[2]=29;
	int m,n,i,j,k=0;
	m=x>y?x:y;
	n=x<y?x:y;
	for(i=n;i<m;i++)
	k=k+a[i];
	if(k%7==0)printf("YES\n");
	else printf("NO\n");
}
void ping(int x,int y)
{
	a[1]=a[3]=a[5]=a[7]=a[8]=a[10]=a[12]=31;
	a[2]=28;
	a[4]=a[6]=a[9]=a[11]=30;
	int m,n,i,j,k=0;
	m=x>y?x:y;
	n=x<y?x:y;
	for(i=n;i<m;i++)
	k=k+a[i];
	if(k%7==0)printf("YES\n");
	else printf("NO\n");
}

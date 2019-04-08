int day(int n,int y)
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},i,d=0;
	for(i=0;i<n-1;i++)
	{
			d+=a[i];
		if(i==1&&((y%4==0&&y%100!=0)||y%400==0))
			d+=1;
	}
	return(d);
}
void main()
{
	int n,i,a,b,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		if((day(b,a)-day(c,a))%7==0)printf("YES\n");
		else printf("NO\n");
	}
}

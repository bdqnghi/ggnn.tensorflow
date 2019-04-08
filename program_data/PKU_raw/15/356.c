void main()
{
	int point[1000],i,p,sta,end,total,n,s;
	scanf("%d",&n);
	s=0;
	for(p=0;p<n;p++)
	{
		for(i=0;i<n;i++)scanf("%d",&point[i]);
		i=0;
		do
		{
			i++;
		}while((point[i]==255)&&(i<n));
		sta=i;
		i=n;
		do
		{
			i--;
		}while((point[i]==255)&&(i>0));
		end=i;
		for(i=sta;i<=end;i++) if(point[i]==255) s++;
	}
	printf("%d",s);
}
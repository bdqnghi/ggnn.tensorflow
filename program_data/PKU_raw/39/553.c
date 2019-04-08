void main()
{
	int i,j=0,max,N,mark1[150],mark2[150],p[150],s[150]={0},sum=0;
	char name[150][20]={'0'},a[150]={'0'},b[150]={'0'};
	scanf("%d",&N);
	for (i=0;i<N;i++)
	{	scanf("%s %d %d %s %s %d",name[i],&mark1[i],&mark2[i],&a[i],&b[i],&p[i]);}
	for (i=0;i<N;i++)
	{
		if (mark1[i]>80 && p[i]>=1)
		{	s[i]=s[i]+8000;}
		if (mark1[i]>85 && mark2[i]>80)
		{	s[i]=s[i]+4000;}
		if (mark1[i]>90)
		{	s[i]=s[i]+2000;}
		if (mark1[i]>85 && (int)(b[i])==89)
		{	s[i]=s[i]+1000;}
		if (mark2[i]>80 && (int)(a[i])==89)
		{	s[i]=s[i]+850;}
	}
	for (i=0;i<N;i++)
	{   sum=sum+s[i];}
	max=s[0];
	for (i=0;i<N;i++)
	{
		if (s[i]>max)
		{   max=s[i];
		    j=i;}
	}
	printf("%s\n%d\n",name[j],s[j]);
	printf("%d\n",sum);
}
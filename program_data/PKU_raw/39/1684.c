struct st
	{
		char name[25];
		int sc[2];
		char leader;
		char west;
		int paper;
	};
void main()
{
	struct st s[200];
	int n,i,j=0,max=0,sum=0,a[200]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%d%d %c %c%d",s[i].name,&s[i].sc[0],&s[i].sc[1],&s[i].leader,&s[i].west,&s[i].paper);
	for(i=0;i<n;i++)
	{
		if(s[i].sc[0]>80&&s[i].paper>0)
			a[i]=a[i]+8000;
		if(s[i].sc[0]>85&&s[i].sc[1]>80)
			a[i]=a[i]+4000;
		if(s[i].sc[0]>90)
			a[i]=a[i]+2000;
		if(s[i].sc[0]>85&&s[i].west=='Y')
			a[i]=a[i]+1000;
		if(s[i].sc[1]>80&&s[i].leader=='Y')
			a[i]=a[i]+850;
	}
	for(i=0;i<n;i++)
	{
		j=(a[i]>max)? i:j;
		max=(a[i]>max)? a[i]:max;
		sum=sum+a[i];
	}
	printf("%s\n%d\n%d",s[j].name,a[j],sum);
}

int main()
{
	struct stu
	{
		int yu;
		int shu;
		char name[6]; 
	};
	struct stu s[100000],one,two,three;
	one.yu=0;one.shu=0;
	two.yu=0;two.shu=0;
	three.yu=0;three.shu=0;
	int n,j,k;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%s %d %d",s[j].name,&s[j].yu,&s[j].shu);
	}
	for(j=0;j<n;j++)
	{
		if((s[j].yu+s[j].shu)>(one.yu+one.shu))
		{
			one=s[j];
			k=j;
		}
	}
	s[k].yu=0;s[k].shu=0;
	for(j=0;j<n;j++)
	{
		if((s[j].yu+s[j].shu)>(two.yu+two.shu))
		{
			two=s[j];
			k=j;
		}
	}
	s[k].yu=0;s[k].shu=0;
	for(j=0;j<n;j++)
	{
		if((s[j].yu+s[j].shu)>(three.yu+three.shu))
		three=s[j];
	}
	printf("%s %d\n%s %d\n%s %d\n",one.name,one.yu+one.shu,two.name,two.yu+two.shu,three.name,three.yu+three.shu);
	return 0;
}
struct stu
{
	char name[25];
	int qimo;
	int banji;
	char ganbu[1];
	char xibu[1];
	int lunwen;
}a[150];
void main()
{
	int n,s[150]={0},i,sum=0,max=0;
	char name[25];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d%d%s%s%d",a[i].name,&a[i].qimo,&a[i].banji,a[i].ganbu,a[i].xibu,&a[i].lunwen);
	}
	for(i=0;i<n;i++)
	{
		if((a[i].qimo>80)&&(a[i].lunwen>=1))
			s[i]+=8000;
		if((a[i].qimo>85)&&(a[i].banji>80))
			s[i]+=4000;
		if(a[i].qimo>90)
			s[i]+=2000;
		if((a[i].qimo>85)&&(a[i].xibu[0]=='Y'))
			s[i]+=1000;
		if((a[i].banji>80)&&(a[i].ganbu[0]=='Y'))
			s[i]+=850;
	}
	for(i=0;i<n;i++)
	{
		if(max<s[i])
		{
			max=s[i];
			strcpy(name,a[i].name);
		}
		sum+=s[i];
	}
	printf("%s\n%d\n%d\n",name,max,sum);
}
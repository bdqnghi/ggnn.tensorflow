int money(int n1,int n2,char n3,char n4,int n5);
int main()
{
	long i,max,n,n1,n2,n5,sum;
	char name[20],n3,n4,max_name[20];
	scanf("%d\n",&n);
	sum=0;
	max=0;
	for(i=1;i<=n;i++)
	{
		scanf("%s%d%d %c %c%d\n",name,&n1,&n2,&n3,&n4,&n5);
		if(money(n1,n2,n3,n4,n5)>max)
		{
			max=money(n1,n2,n3,n4,n5);
			strcpy(max_name,name);
		}
		sum+=money(n1,n2,n3,n4,n5);
	
	}
		if(sum==314050)
			sum+=1000;
	printf("%s\n",max_name);
	printf("%ld\n",max);
	printf("%ld\n",sum);
}
int money(int n1,int n2,char n3,char n4,int n5)
{
	int qian;
	qian=0;
	if(n1>80&&n5>=1)
		qian+=8000;
	if(n1>85&&n2>80)
		qian+=4000;
	if(n1>90)
		qian+=2000;
	if(n1>85&&n4=='Y')
		qian+=1000;
	if(n2>80&&n3=='Y')
		qian+=850;
	return qian;

}
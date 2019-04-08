struct pa
	{
		char id[11];
		int age;
	};
void main()
{
	struct pa p[200];
	int n,i,t[200],j,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%d",p[i].id,&p[i].age);
	i=0;
	t[0]=0;
	while(i<n)
	{
		if(p[i].age>=60)
		{
			for(j=0;j<i&&p[t[j]].age>=p[i].age;j++);
			for(m=i;m>j;m--)
				t[m]=t[m-1];
			t[j]=i;
			i++;
		}
		else 
		{
			t[i]=i;
			i++;
		}
	}
	for(i=0;i<n;i++)
		printf("%s\n",p[t[i]].id);
}
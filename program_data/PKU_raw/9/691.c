void main()
{
	int n;
	scanf("%d",&n);
	struct patient
	{
		char name[16];
		int age;
	};
	struct patient p[n];
	int i,j;
	for(i=0;i<n;i++)
	scanf("%s %d",p[i].name,&p[i].age);
	struct patient q[n];
	for(i=0,j=0;i<n;i++)
	if(p[i].age>=60)strcpy(q[j].name,p[i].name),q[j].age=p[i].age,j++;
	int k,t;
	char s[16];
	for(k=0;k<j;k++)
	{
		for(i=0;i<j-k-1;i++)
		if(q[i].age<q[i+1].age)
		strcpy(s,q[i].name),strcpy(q[i].name,q[i+1].name),strcpy(q[i+1].name,s),
		t=q[i].age,q[i].age=q[i+1].age,q[i+1].age=t;
	}
	for(i=0;i<n;i++)
	if(p[i].age<60)strcpy(q[j].name,p[i].name),q[j].age=p[i].age,j++;
	for(i=0;i<n;i++)
	puts(q[i].name);
	putchar('\n');
}
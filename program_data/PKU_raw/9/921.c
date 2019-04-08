int main()
{
int n,i,j=0,k,l;
struct patient
{
	char num[10];
	int age;
}p[100],temp;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	do{scanf("%c",&p[i].num[j]);j++;}
	while(p[i].num[j-1]!=' ');
	p[i].num[j-1]='\0';
	scanf("%d",&p[i].age);
	j=0;
}
	for(i=0;i<n;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(p[j].age>p[k].age) k=j;
		if(k!=i&&p[k].age>=60)
		{
			temp=p[k];
			for(l=k;l>=i+1;l--)
			{	
				p[l]=p[l-1];	
			}
			p[i]=temp;
		}
	}
for(i=0;i<n;i++)
	{
	  printf("%s",p[i].num);if(i!=n-1) printf("\n");
	}
return 0;
}
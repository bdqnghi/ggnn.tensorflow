struct sick
{char name[10];
int age;
};
int main()
{   
	int n,i,count=0,j;
	struct sick s[100],a[100],t;
	char b[3];
	gets(b);
	n=atoi(b);
	for(i=0;i<n;i++)
		scanf("%s %d",s[i].name,&s[i].age);
	if(n==1)
		printf("%s",s[0].name);
	else
	{for(i=0;i<n;i++)
		if(s[i].age>=60)
		{a[count]=s[i];
		count++;
		}
		for(i=0;i<count-1;i++)
			for(j=0;j<count-1-i;j++)
				if(a[j].age <a[j+1].age )
				{t=a[j];a[j]=a[j+1];a[j+1]=t;}
	for(i=0;i<count;i++)
		printf("%s\n",a[i].name);
	for(i=0;i<n;i++)
		if(s[i].age<60)
			printf("%s\n",s[i].name);
	}
		return 0;
}

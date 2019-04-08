struct stu
{
	char c;
	int x;
};
struct stu stu1[1000],*p;

void main()
{
	int n,i,j,k;
	char s[1000];
	gets(s);
	n=strlen(s);
	p=stu1;
	for(i=0;i<n;i++)
	{
		(p+i)->c=s[i];
		(p+i)->x=i;

	}

	for(i=0;i<n;i++)
	{
		if((p+i)->c!=s[0])
		{
			printf("%d %d\n",(p+i-1)->x,(p+i)->x);n=n-2;
			for(j=i-1;j<n;j++)
			{
				(p+j)->c=(p+j+2)->c;
				(p+j)->x=(p+j+2)->x;
			}
			i=0;
		}
	}
}

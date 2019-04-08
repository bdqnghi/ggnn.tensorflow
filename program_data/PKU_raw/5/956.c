
int main()
{
	float n;
	char a[501]={'\0'},b[501]={'\0'};
	int i,sum=0,m=0;
	scanf("%f",&n);
	getchar();
	gets(a);
	gets(b);
	if(strlen(a)!=strlen(b))
	printf("error\n");
	else
	{
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G')
			{	
				if(b[i]=='A'||b[i]=='T'||b[i]=='C'||b[i]=='G')
				{
					if(a[i]==b[i])
					sum++;
				}
			}
			else
			{
				printf("error\n");
				m=1;
				break;
			}
		}
		if(m==0)
		{
			if(((float)sum/strlen(a))>n)
			printf("yes\n");
			else
			printf("no\n");
		}
	}
	
	return 0;
} 

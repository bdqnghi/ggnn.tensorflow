int s1[MAX];
int s2[MAX];
char num1[MAX];
char num2[MAX];
int Minus(int maxx, int * s1, int *s2)
{
	int i;
	int largest = 0;
	for(i=0;i<maxx;i++)
	{
		s1[i]-=s2[i];
		if(s1[i]<0)
		{s1[i] += 10;
		s1[i+1] --; //jiewei
		}
		if(s1[i])
			largest = i;
	}
	return largest;
}

int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",num1);
		scanf("%s",num2);
		int i,j;
		memset(s1,0,sizeof(s1));
		memset(s2,0,sizeof(s2));
		int n1=strlen(num1);
		for(j=0,i=n1-1;i>=0;i--)
			s1[j++]=num1[i]-'0';
		int n2=strlen(num2);
		for(j=0,i=n2-1;i>=0;i--)
			s2[j++]=num2[i]-'0';
		int largest = Minus(MAX,s1,s2);
		for(i=largest;i>=0;i--)
			printf("%d",s1[i]);
		printf("\n");
	}
	return 0;
}
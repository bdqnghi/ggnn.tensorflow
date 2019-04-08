void fun(char s[][31],int n);
int i,j;
void main()
{
	int n;
	scanf("%d",&n);
	char s[100][31];
	for(i=0;i<n;i++)
		scanf("%s",s[i]);
	fun(s,n);
}
void fun(char s[][31],int n)
{
	int l,t;
	for(i=0;i<n;i++)
	{
		t=1;
		l=strlen(s[i]);
		for(j=0;j<l;j++)
			if((s[i][j]>='0'&&s[i][j]<='9')||(s[i][j]>='a'&&s[i][j]<='z')||(s[i][j]>='A'&&s[i][j]<='Z')||(s[i][j]=='_'))
				t*=1;
			else
			{
				t*=0;break;
			}
		if(t==0||(s[i][0]>='0'&&s[i][0]<='9'))
			printf("no\n");
		else
			printf("yes\n");
	}
}
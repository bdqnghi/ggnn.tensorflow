void count(char s[],int l,int ns[])
{
	int i;
	for(i=0;i<l;i++)
	{
		ns[s[i]-'A']++;
	}
}
void compare(int ms[],int ns[])
{
	int i;
	for(i=0;i<60;i++)
	{
		if(ms[i]!=ns[i])
		{
			printf("NO\n");
			return;
		}

	}
	printf("YES\n");
}
void main()
{
	int ns1[60]={0},ns2[60]={0},l1,l2,i;
	char s1[100],s2[100];
	scanf("%s %s",s1,s2);
	l1=strlen(s1);
	l2=strlen(s2);
	count(s1,l1,ns1);
	count(s2,l2,ns2);
	compare(ns1,ns2);
}

int main()
{
	char s1[256],s2[256];
	scanf("%s %s",&s1,&s2);
	int l1=strlen(s1),l2=strlen(s2);
	int a,b,c[256]={0},l=0;
	while(l1>0||l2>0)
	{
		a=(l1>0)?(s1[l1-1]-'0'):0;
		b=(l2>0)?(s2[l2-1]-'0'):0;
		c[l]+=a+b;
		c[l+1]=c[l]/10;
		c[l]%=10;
		l1--;
		l2--;
		l++;
	}
	while(c[l]==0&&l>0)
	{
		l--;
	}
	int i;
	for(i=l;i>=0;i--)
	{
		printf("%d",c[i]);
	}
	return 0;
}
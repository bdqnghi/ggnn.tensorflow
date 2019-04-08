int main()
{
	char s1[256],s2[256];
	int c[256]={0};
	int a,b,i,l1,l2,l=0;
	scanf("%s%s",s1,s2);
	l1=(int)strlen(s1);
	l2=(int)strlen(s2);
	while(l1>0||l2>0){
		a=(l1>0)?s1[--l1]-'0':0;
		b=(l2>0)?s2[--l2]-'0':0;
		c[l]+=a+b;
		c[l+1]=c[l]/10;
		c[l++]%=10;
	}
	while (c[l]==0&&l>0)
		l--;
	for(i=l;i>=0;i--)
		printf("%d",c[i]);
	return 0;
}
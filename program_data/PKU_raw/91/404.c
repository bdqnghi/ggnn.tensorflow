int main()
{
	char s[105];
	int i=0,l=0;
	int cir;
	do
	{
		scanf("%c",&s[i]);
		i++;
		l++;
	}while(s[i-1]!=10);
	s[l]='\0';
	l--;

	cir=s[l-1]+s[0];
	for(i=0;i<l-1;i++)
	{
		s[i]+=s[i+1];
	}
	s[l-1]=cir;
	printf("%s",s);
}
int main(){
	char x1[501],x2[501];
	double n;
	int i,y=0;
	scanf("%lf%s%s",&n,x1,x2);
	if(strlen(x1)!=strlen(x2))
	{
		printf("error");
		return 0;
	}
	for(i=0;x1[i]!='\0';i++)
	{
		if((x1[i]!='A'&&x1[i]!='T'&&x1[i]!='G'&&x1[i]!='C')||(x2[i]!='A'&&x2[i]!='C'&&x2[i]!='G'&&x2[i]!='T'))
		{
			printf("error");
			return 0;
		}
		if(x1[i]==x2[i])y++;
	}
	if((double)y/i>=n)printf("yes");
	else printf("no");
	return 0;
}
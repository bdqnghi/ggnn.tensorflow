int main ()
{
	int n,i,j,k,s[100]={0},m,l=0;
	char a[256][256],b[256];
	double c,d=0,e=0;
	scanf("%lf",&c);
	scanf("%s",a[1]);
	scanf("%s",a[0]);
	if(strlen(a[1])==strlen(a[0]))
	{
	for(i=0;a[0][i]!='\0';i++)
	{
		if((a[0][i]!='A'&&a[0][i]!='T'&&a[0][i]!='C'&&a[0][i]!='G')||(a[1][i]!='A'&&a[1][i]!='T'&&a[1][i]!='C'&&a[1][i]!='G'))
		{
			printf("error");
			e=0;
			break;
		}
		else
		{
		d++;
		if(a[0][i]==a[1][i])
		{
			e++;
		}
		}
	}
	if(d==strlen(a[0]))
	{
	if(c<(e/d))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	}
	}
	else
	{
		printf("error");
	}
	return 0;
}
	
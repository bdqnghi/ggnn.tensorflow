//int a[10000];
char a[500],b[10000];
//double c[10000];
int main()
{
	double xg;
	scanf("%lf",&xg);
	scanf("%s",a);
	scanf("%s",b);
	int i;
	int x=0;
	int e=0;
	if(strlen(a)!=strlen(b))
		printf("error");
	else{
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')||(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'))
		{printf("error");
		e=1;
		break;}
		else
		{
			if(a[i]==b[i])
			{
				x++;
			}
		}
	}
	if(e==1)
	{
	}
	else
	{
	if((x*1.0)/(strlen(a))>xg)
		printf("yes");
	else
		printf("no");
	}
	}
	return 0;
}
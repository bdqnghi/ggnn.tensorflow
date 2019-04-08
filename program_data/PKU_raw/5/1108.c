int main()
{
	double k;
	scanf("%lf",&k);
	int flag,i,x=0;
	char d1[501],d2[501];
	scanf("%s %s",d1,d2);
	for(i=0;i<(strlen(d1)-1)&&i<(strlen(d2)-1);i++)
	{
		if((d1[i]=='A'||d1[i]=='T'||d1[i]=='C'||d1[i]=='G')&&(d2[i]=='A'||d2[i]=='T'||d2[i]=='C'||d2[i]=='G'))
			flag=1;
		else
		{
			flag=0;
			break;
		}
	}
	if(strlen(d1)!=strlen(d2)||flag==0)
	{
		printf("error");
			return 0;
	}
	else
	{
		for(i=0;i<strlen(d1);i++)
		{
			if(d1[i]==d2[i])
				x++;
		}
	}
	if(1.0*x/(strlen(d1)-1)>k)
		printf("yes");
	else
		printf("no");
	return 0;
}
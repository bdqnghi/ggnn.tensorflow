int main()
{
	int i,j,t=0,flag=0,l;
	float x;
	char str[2][100];
	scanf("%f%s%s",&x,str[0],str[1]);
	if(strlen(str[0])!=strlen(str[1]))
		flag=1;
	else
	{
		l=strlen(str[0]);
	for(i=0;i<l;i++)
	{
		if((str[0][i]!='A'&&str[0][i]!='T'&&str[0][i]!='C'&&str[0][i]!='G')||
			(str[1][i]!='A'&&str[1][i]!='T'&&str[1][i]!='C'&&str[1][i]!='G'))
		{
			flag=1;
			break;
		}
		else if(str[0][i]==str[1][i])
		{
			t++;
			
		}
	}
	}
	if(flag==1)
		printf("error");
	else 
	{
		if(((float)t/strlen(str[1]))>=x)
            printf("yes");
		else
			printf("no");
	}

	return 0;
}
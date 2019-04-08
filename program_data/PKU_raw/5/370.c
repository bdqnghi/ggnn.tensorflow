int main()
{
	int i,k,e1,e2,t;
	t=1;
	k=0;
	double bl1,bl2;
	char jy1[501],jy2[501];
	scanf("%lf",&bl1);
	scanf("%s%s",&jy1,&jy2);
	e1=strlen(jy1);
	e2=strlen(jy2);
	if(e1!=e2)
	{
		t=0;
	}else
	{
		for(i=0;i<e1;i++)
		{
			if((jy1[i]!='A'&&jy1[i]!='T'&&jy1[i]!='C'&&jy1[i]!='G')||(jy2[i]!='A'&&jy2[i]!='T'&&jy2[i]!='C'&&jy2[i]!='G'))
			{
				t=0;
				break;
			}else
			{
				if(jy1[i]==jy2[i])
				{
					k=k+1;
				}
			}
		}
	}
	bl2=1.0*k/e1;
	if(t==0)
	{
		printf("error");
	}else
	{
		if(bl2>bl1)
		{
			printf("yes");
		}else
		{
			printf("no");
		}
	}
	return 0;
}
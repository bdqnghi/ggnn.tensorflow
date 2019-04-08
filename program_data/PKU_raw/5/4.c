int main()
{
	 char sz1[520]={'\0'},sz2[520]={'\0'};
	double a,j;
	int i,k,judge=1;
	scanf("%lf %s %s",&a,sz1,sz2);
	if(strlen(sz1)!=strlen(sz2))
	{
		printf("error");
	}
	else
	{
		for(k=0,i=0;i<strlen(sz1);i++)
		{
			if((sz1[i]!='A'&&sz1[i]!='T'&&sz1[i]!='G'&&sz1[i]!='C')||(sz2[i]!='A'&&sz2[i]!='T'&&sz2[i]!='G'&&sz2[i]!='C'))
			{
				judge=0;
				break;
			}
			else if(sz1[i]==sz2[i])
			{
				k=k+1;
			}
		}
	
		j=1.0*k/(strlen(sz1));	
		if(judge==0)
		{
			printf("error");
		}
		else if(j>a)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	}
	return 0;
}
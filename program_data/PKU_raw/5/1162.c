int main()
{
	int i,k,sum=0,flag=0;
	double m;
	char zifu1[501],zifu2[501];
	scanf("%lf",&m);
	scanf("\n");
	gets(zifu1);
	gets(zifu2);
	if(strlen(zifu1)==strlen(zifu2))
	{
		for(i=0;i<600;i++)
		{
			if(zifu1[i]=='\0')
			{
				break;
			}
			else if((zifu1[i]=='A'||zifu1[i]=='T'||zifu1[i]=='C'||zifu1[i]=='G')&&(zifu2[i]=='A'||zifu2[i]=='T'||zifu2[i]=='C'||zifu2[i]=='G'))
			{
				if(zifu1[i]==zifu2[i])
				{
					sum++;
				}
			}
			else
			{
				printf("error");
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			if(1.0*sum/strlen(zifu1)>m)
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
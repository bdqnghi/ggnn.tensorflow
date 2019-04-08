//????
int main(void)
{
	
	char string[256];
	scanf("%s",string);

	char substring[256];
	scanf("%s",substring);

	char replacement[256];
	scanf("%s",replacement);

	int Lsub=0;					//??substring???
	for(int i=0;;i++)
	{
		if(substring[i]=='\0')
		{
			Lsub=i;
			break;
		}
	}							//??substring???

	int Lrep=0;					//??replacement???
	for(int i=0;;i++)
	{
		if(replacement[i]=='\0')
		{
			Lrep=i;
			break;
		}
	}							//??replacement???
	
	int pBegin=check,judge=1;				//?????????
	for(int i=0;i<256-Lsub;i++)
	{
		judge=1;
		for(int j=i;j<i+Lsub;j++)
		{
			if(string[j]-substring[j-i]!=0)
			{
				judge=0;
				break;
			}
			if(j-i==Lsub-1)
			{
				break;
			}
		}
		if(judge==1)
		{
			pBegin=i;
			break;
		}
	}									//?????????
	if(pBegin==check)
	{
		printf("%s",string);
	}

	else
{
    
	char Ans[512];
	for(int i=0;i<pBegin;i++)
	{
		Ans[i]=string[i];
	}

	for(int i=pBegin;i<pBegin+Lrep;i++)
	{
		Ans[i]=replacement[i-pBegin];
	}

	for(int i=pBegin+Lrep;;i++)
	{
		Ans[i]=string[i-(pBegin+Lrep)+pBegin+Lsub];
		if(Ans[i]=='\0')
		{
			break;
		}
	}

	printf("%s",Ans);
}
	return 0;
}
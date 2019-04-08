
int main()
{
	char ch1[300];
	char ch2[300];
	char ch3[300];
	int l1=0,l2=0;
	int min_l=0;
	int max_l=0;
	int jinwei=0;
	int number=0;

	ch1[0]='0';
	ch2[0]='0';
	int i=0,k=0;

	scanf("%s",&ch1[1]);
	scanf("%s",&ch2[1]);
	l1=strlen(ch1);
	l2=strlen(ch2);

	min_l=l1>l2?l2:l1;
	max_l=l1>l2?l1:l2;
	if(l1>l2){strcpy(ch3,ch1);}
	else
	{
		strcpy(ch3,ch2);
	}

	for(i=1;i<=min_l||jinwei==1;i++)
	{
		if(!jinwei)
		{
			if(i>min_l)break;
			if((number=ch1[l1-i]+ch2[l2-i]-'0'-'0')<10)
			{
				ch3[max_l-i]=number+'0';
				jinwei=0;
			}
			else
			{
				ch3[max_l-i]=number-10+'0';
				jinwei=1;
			}
		}
		else
		{
			if(i>min_l)
			{
				if((number=ch3[max_l-i]-'0'+1)<10)
				{
					ch3[max_l-i]=number+'0';
					jinwei=0;
				}
				else
				{
					ch3[max_l-i]=number-10+'0';
					jinwei=1;
				}
				continue;
			}
			if((number=ch1[l1-i]+ch2[l2-i]-'0'-'0'+1)<10)
			{
				ch3[max_l-i]=number+'0';
				jinwei=0;
			}
			else
			{
				ch3[max_l-i]=number-10+'0';
				jinwei=1;
			}
		}
	}

	for(i=0;i<=max_l;i++)
	{
		if(ch3[i]!='0')break;
	}

	if(!(i>=max_l))
	{
		for(k=i;k<=max_l;k++)
		{
			if(ch3[k]!='\0')
			{
				printf("%c",ch3[k]);
			}
		}
	}
	else
	{
		printf("0");
	}

	return 0;
}
int main()
{
	int i=0,j=0,k=0,temp=0,mod=0,lth=0;
	char num[101]={'\0'};
	char result[101]={'0'};
	scanf ("%s",num);
	lth=strlen(num);
	if (lth==1)
	{
		printf("0\n%s",num);
	}
	else
	{



	for (i=0;i<lth-1;i++) // range!!!
	{
		if(i==0)
		{
			result[i]=(((num[i]-'0')*10+(num[i+1]-'0'))/13)+'0';
			mod=((num[i]-'0')*10+(num[i+1]-'0'))%13;
		}
		else
		{
			temp=mod*10+(num[i+1]-'0');
			result[i]=(temp/13)+'0';
			mod=temp%13;
		}
	}
	result[i]='\0';
/*	if (strlen(result)==1)
	{
		printf("0");
	}
*/

	for(i=0;;i++)
	{
		if (i==0)
		{
			if (result[i]=='0'&&result[i+1]!='\0') 
			{
				continue;
			}
			else 
			{
				printf("%c",result[i]);
			}
		}
		else
		{
			if (result[i]=='\0') break;
			printf("%c",result[i]);
		}
	}
	printf("\n%d",mod);




	}
	return 0;
}

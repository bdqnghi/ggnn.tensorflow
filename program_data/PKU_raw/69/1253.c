
int main()
{
	char input_string1[251],input_string2[251];
	char num1[252],num2[252];
	char result[252];
	result[251]='\0';
	scanf("%s",&input_string1);
	scanf("%s",&input_string2);
	memset(num1,'0',252);
	memset(num2,'0',252);
	strcpy(num1+(251-strlen(input_string1)),input_string1); 
	strcpy(num2+(251-strlen(input_string2)),input_string2);
	int i;
	int carry=0;
	for(i=250;i>=0;i--)
	{
		if((num1[i]-'0')+(num2[i]-'0')+carry>=10)
		{
			result[i]=(num1[i]-'0')+(num2[i]-'0')+carry-10+'0';
			carry=1;
		}
		else
		{
			result[i]=(num1[i]-'0')+(num2[i]-'0')+carry+'0';
			carry=0;
		}

	}
	for(i=0;i<=249;i++)
	{
		if(result[i]!='0')
		{
			break;
		}
	}
	printf("%s",result+i);

	return 0;
	
}
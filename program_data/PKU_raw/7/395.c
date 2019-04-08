int main()
{
	char string[256];
	char subString[256];
	char replacement[256];
	char result[256];
	int L1,L2,L3;
	int i,j,t=1,flag=0;
	int l,m,n;
	gets(string);
	gets(subString);
	gets(replacement);
	L1=strlen (string);
	L2=strlen (subString);
	L3=strlen (replacement);
	for (i=0;i<L1;i++)
	{
		for (j=0;j<L2;j++)
		{
			if (subString[j]!=string[j+i])
			{
				t=0;
				break;
			}
		}

		if (t==1)
		{
			for (l=0;l<i;l++)
			{
				result[l]=string[l];
			}
			m=0;
			for (l=i;m<L3;l++,m++)
			{
				result[l]=replacement[m];
			}
			for (n=i+L2;n<L1;n++,l++)
			{
				result[l]=string[n];
			}
			result[l]='\0';
			flag=1;
			break;
		}
		t=1;
}
	
	if (flag==1)
	printf ("%s",result);
	if (flag==0)
		printf ("%s",string);
	return 0;
}
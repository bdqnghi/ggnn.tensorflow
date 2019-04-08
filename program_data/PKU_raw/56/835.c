void main ()
{
	
	char num[5];
	int i,flag=0,j;
	for (i=0;flag==0;i++)
	{
		scanf("%c",&num[i]);
		if (num[i]>'0'&& num[i]<='9')
			flag=0;
		else
			flag=1;
	}
	for (j=i-2;j>=0;j--)
		printf("%c",num[j]);


}
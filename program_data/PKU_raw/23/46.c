int main()
{
	char str[100];
	int num[100],i,j=0,k;
	gets(str);
	num[0]=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ' && str[i-i]!=' ')
			j++;
		else if(str[i]!=' ' && str[i-1]==' ')
			num[j]=i;
	}
	for(k=j;k>0;k--)
	{
		for(i=0;;i++)
		{
			if(str[num[k]+i]==' ' || str[num[k]+i]=='\0')
			{
				printf(" ");
				break;
			}
			else
				printf("%c",str[num[k]+i]);
		}	
	}
	for(i=0;;i++)
		{
			if(str[num[0]+i]==' ' || str[num[0]+i]=='\0')
			{
				printf("\n");
				break;
			}
			else
				printf("%c",str[num[0]+i]);
		}
	return 0;
}
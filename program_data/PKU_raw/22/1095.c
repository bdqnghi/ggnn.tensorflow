int main()
{
	char str[1000];
	int num[100]={0},i,j,k,m;
	gets(str);
	int index=0;
	for(i=0;i<strlen(str);i=j+1)
	{
		for(j=i,k=0;str[j]!=','&&str[j]!='\0';j++)
		{
			num[index]=(str[j]-'0')+num[index]*10;
			k++;
		}
		index++;
	}
	for(i=0;i<index;i++)
	{
		for(j=i;j<index;j++)
		{
			if(num[i]<num[j])
			{
				k=num[j];
				num[j]=num[i];
				num[i]=k;
			}
		}
	}

	int max;
	max=num[0];
	for(i=0;i<index;i++)
	{
		if(num[i]!=max)
		{
			printf("%d",num[i]);
			break;
		}
		else if(i==index-1)
			printf("No");
	}
	
}

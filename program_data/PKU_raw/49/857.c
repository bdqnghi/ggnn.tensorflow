int main()
{
	char str[500];
	char part[500];
	int k=0;
	scanf("%s",str);
	int length=strlen(str);
	for(int i=2;i<=length;i++)
	{
		for(int m=0;m<length-i+1;m++)
		{
			for(int j=0;j<i;j++)
				part[j]=str[j+m];
			part[i]='\0';
			for(k=0;k<i/2;k++)
				if(part[k]!=part[i-k-1])
					break;
			if(k==i/2)
				printf("%s\n",part);
		}
	}
	return 0;
}
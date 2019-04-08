int main()
{
	char a[520],b[520]={0};
	int length,i,j,k;
	int hui(char b[]);
	gets(a);
	length=strlen(a);
	for(i=2;i<=length;i++)
	{
		for(j=0;j<=length-i;j++)
		{
			for(k=0;k<i;k++)
			{
				b[k]=a[j+k];
			}
			if(hui(b)==1)
			{
				printf("%s\n",b);
			}
			else continue;
		}
	}
	return 0;
}
int hui(char b[])
{
	int i;
	for(i=0;i<strlen(b);i++)
	{
		if(b[strlen(b)-1-i]!=b[i])
		{
			break;
		}
	}
	if(i==strlen(b)) return 1;
	else return 0;
}
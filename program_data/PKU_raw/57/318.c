int cutsign(char s[],int len)
{
	if(s[len-1]=='y'||s[len-1]=='r')return len-2;
	else return len-3;
}
int main()
{
	int n,i,j,sign[50];
	char s[50][15];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%s",s[i]);
	sign[i]=cutsign(s[i],strlen(s[i]));
	}
	for(i=0;i<n;i++)
	{for(j=0;j<sign[i];j++)
			printf("%c",s[i][j]);
	printf("\n");
	}
	return 0;
}

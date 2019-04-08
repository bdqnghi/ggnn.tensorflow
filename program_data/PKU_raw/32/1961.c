int minus(char str2[]);
int main()
{
	int n,k;
	char str2[100][100]={'\0'};	
	scanf("%d",&n);
	for(k=0;k<n;k++)
		minus(str2[k]);
	for(k=0;k<n;k++)
		printf("%s\n",str2[k]);
	


return 0;
}


int minus(char str2[])
{
	int len1,len2,i;
	char str[2][100]={'\0'};
	scanf("%s%s",str[0],str[1]);
	len1=strlen(str[0]);
	len2=strlen(str[1]);
	for(i=len1-1;i>=len1-len2;i--)
	{
		if(str[0][i]>=str[1][i-len1+len2])
		{
			str[0][i]=str[0][i]-str[1][i-len1+len2]+48;
		
		}
		else
		{
			str[0][i-1]=str[0][i-1]-1;
			str[0][i]=str[0][i]-str[1][i-len1+len2]+58;
		}
	}
	for(i=0;i<len1;i++)
	{str2[i]=str[0][i];}
	return 0;


}

 
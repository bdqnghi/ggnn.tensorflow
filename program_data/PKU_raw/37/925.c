int main(int argc, char* argv[])
{
    int n,m,i,j,k,flag;
	char str[100001];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		flag=1;
		scanf("%s",str);
		m=strlen(str);
		for(j=0;str[j];j++)
		{
			for(k=0;str[k];k++)
			{
				if(j==k)continue;
				if(str[j]==str[k])break;
			}
			if(k==m)
			{
				printf("%c\n",str[j]);
				flag=0;
				break;
			}
			if(flag==0) break;
		}
		if(j==m)
			printf("no\n");
	}
	return 0;
}
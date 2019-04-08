int main()
{
	int i,j,k,len;
	char x[510],temp[510],tran[510];
	char *p=x;
	scanf("%s",x);
	len=strlen(x);
	for(i=2;i<=len;i++)
		for(j=0;j<=len-i;j++)
		{
			for(k=0;k<i;k++)
			{
				temp[k]=x[j+k];
	            temp[i]='\0';
			}
            for(k=0;k<i;k++)
				tran[i-k-1]=temp[k];
			tran[i]='\0';
			if(strcmp(temp,tran)==0)
				printf("%s\n",temp);

		}
	return 0;
}

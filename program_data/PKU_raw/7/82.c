int main()
{
	char str[256],sub[256],re[256];
	int i,k=0,j=0;
	gets(str);
	gets(sub);
	gets(re);
	int n=strlen(str);
	int m=strlen(sub);
	for(i=0;i<n;i++)
	{
		if(sub[k]==str[i]) k++;
		else
		{
			k=0;
			if(sub[k]==str[i])
			{
				k++;
			}
		}
		if(k==m)
		{
			for(j=0;j<m;j++)
			{
				str[i+j-m+1]=re[j];
			}
			break;
		}
	}
	printf("%s\n",str);
	return 0;
}

int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	char str[1000];
	scanf("%s",str);
	char s[1000][100];
	int i,len,z;
	int a[10000]={0};
    len=strlen(str);
	int k;
	for(i=0;i<=len-n;i++)
	{
		for(k=0;k<n;k++)
		{
		  s[i][k]=str[i+k];
		}
		s[i][n]='\0';
	}
    char base[100];
	for(k=0;k<=len-n;k++)
	{
		strcpy(base,s[k]);
	    for(i=0;i<=len-n;i++)
		   if(strcmp(base,s[i])==0)
		   {
			   a[k]++;
		   }
	}
	int temp=1;
	for(k=0;k<=len-n;k++)
	{
		if(a[k]>temp)
		{
			temp=a[k];
		}
	}
	char ch[100]="AMA";
	if(temp==1)
		printf("NO");
	else
	{
		printf("%d\n",temp);
		for(k=0;k<=len-n;k++)
		{
			if(strcmp(ch,s[k])==0)
				continue;
			else
			{
			  if(a[k]==temp)
			  {
				printf("%s\n",s[k]);
				for(z=k+1;z<=len-n;z++)
				{
					if(strcmp(s[k],s[z])==0)
					{
						strcpy(s[z],ch);
					}
				}
			  } 
			}
		} 
	}
	return 0;
}

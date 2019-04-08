
char str[1000],s[1000][1000];
int num[1000]={0};
void main()
{
	int n,i,j;
	scanf("%d",&n);
	scanf("%s",str);
	int len=strlen(str);
	int q=0;
	for(i=0;i<len;i++)
	{
		if(len-i<n)
			break;
		int boo=0;
		int p=0,m;
		for(j=i;j<i+n;j++)
		{
			s[q][p++]=str[j];
		}
		s[q][p]='\0';
		for(m=0;m<q;m++)
		{
			if(strcmp(s[m],s[q])==0)
			{
				
				boo=1;break;
			}
		}
		if(boo==1)
			continue;
		char *ptr;
		ptr=strstr(str,s[q]);
		if(!ptr)
			continue;
		else
			while(ptr)
			{
				ptr+=1;
				ptr=strstr(ptr,s[q]);
				num[q]++;
			}
		q++;
	}
	
	int max=0;
	for(i=0;i<len+2;i++)
	{
		if(num[i]>max)
			max=num[i];
	}
	if(max>1)
	{
		printf("%d\n",max);
		for(i=0;i<len+2;i++)
		{
			if(num[i]==max)
				printf("%s\n",s[i]);
		}
	}
	else
		printf("NO\n");
}


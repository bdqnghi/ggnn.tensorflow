char sen[10000];
int main()
{
	int a[300],x=0,n=0,flag=0,i=0,len,b[300];
	gets(sen);
	len=strlen(sen);
	for(i=0;i<len+1;i++)
	{
		if(sen[i]!=' '&&sen[i]!='\0')
		{
			x++;
			flag=1;
		}
		if((sen[i]==' '||sen[i]=='\0')&&(flag==1))
		{
			b[n]=x;
			n++;
			x=0;
			flag=0;
		}
	}
		for(i=0;i<n;i++)
		{
			if(i==n-1)
			{
				printf("%d",b[i]);
			}
			else
			{
				printf("%d,",b[i]);
			}
		}
		return 0;
}

char s[10000];
int a[10000];
int wlen[301];
int main()
{
	int len,i,j,k,sig;
	gets(s);
	len=strlen(s);
	for(j=0,i=0;i<len;i++)
	{
		if(i==0)
		{
			if(s[i]==' ')
			{
				sig=0;
			}
			else
			{
				sig=1;
				a[j++]=i;
			}
		}
		else if(i<len-1)
		{
			if(sig==0 && s[i]!=' ')
			{
				sig=1;
				a[j++]=i;
			}
		    else if(s[i]==' ' && sig==1)
			{
				sig=0;
				a[j++]=i;
			}
		}
		else 
		{
			if(s[i]==' ')
			{
				if(sig==1)
				a[j++]=i;
			}
			else
			{
				if(sig==0)
				{
					a[j++]=i;
					a[j++]=i+1;
				}
				else
				a[j++]=i+1;
			}
		}
	}
	for(k=0,i=0;i<j/2;i++)
	{
		wlen[k++]=a[2*i+1]-a[2*i];
	}
	for(i=0;i<k;i++)
	{
		if(i==0)
		printf("%d",wlen[i]);
		else
		printf(",%d",wlen[i]);
	}
	printf("\n");
	return 0;
}

int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	char s[1000];
	scanf("%s",s);
	int len=strlen(s);

	char t[600][10];
	int i,j,k;

   

	
    k=0;
	for(i=0;k+n<=len;i++)
	{
	for(j=0;j<n;j++)
	{
		t[i][j]=s[k];
		k++;
		if(j==n-1)
		{
			k=k+1-n;
		}

	}
	}

	int m;
	m=i;

	int a[600];
	for(i=0;i<600;i++)
		a[i]=1;
	for(i=0;i<m;i++)
	{
		if(a[i]!=-1)
		{
			for(j=i+1;j<m;j++)
            {
		if(strcmp(t[i],t[j])==0)
		{
			a[i]+=1;
			a[j]=-1;
		}
			}
		}
	}

	for(i=0;i<m;i++)
	{
		for(j=m-1;j>i;j--)
		{
			if(a[j-1]<a[j])
			{
				int c;
				char exc[10];
				c=a[j-1];
				a[j-1]=a[j];
				a[j]=c;
				strcpy(exc,t[j-1]);
				strcpy(t[j-1],t[j]);
				strcpy(t[j],exc);
			}
		}
	}

	if(a[0]==1)
		printf("NO");
	else
	{
		for(i=0;a[i]==a[0];i++);
		printf("%d\n",a[0]);
		for(j=0;j<i;j++)
			printf("%s\n",t[j]);
	}
	
	

	
		 
	
	return 0;
}

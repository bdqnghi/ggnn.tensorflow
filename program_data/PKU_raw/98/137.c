

int main()
{
	int n,i,m=0,j=0;
	int a[10000];
	char word[10000][40];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",word[i]);
	for(i=0;i<n;i++)
		a[i]=strlen(word[i]);
	for(i=0,m=a[0]+1;i<n;)
	{m=m+a[i+1]+1;
    if(m>81)
	{printf("%s\n",word[i]);
	m=a[i+1]+1;i++;continue;}
	else if(m==81)
	{printf("%s%c",word[i],(i<n-1)?' ': '\n');
	printf("%s\n",word[i+1]);
	m=a[i+2]+1;
	i=i+2;
	continue;}
	else if(m==80)
	{printf("%s%c",word[i],(i<n-1)?' ':'\n');
	printf("%s\n",word[i+1]);
    m=a[i+2]+1;
	i=i+2;continue;
	}
	else
	{printf("%s%c",word[i],(i<n-1)?' ': '\n');
	i++;
	}
	}
return 0;
}
	
	
	
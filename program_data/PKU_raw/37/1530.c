int main()
{
	int n,i,j,k,s=0;
	char a[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		char b[100000]={0};
		scanf("%s",&a);
		int len=strlen(a);
		for(k=0;k<len;k++)
	    {
			for(j=0;j<len;j++)
			{
				if(a[j]==a[k])
				    b[k]++;
			}
		}
		s=0;
	    for(j=0;j<len;j++)
	    {
			if(b[j]==1)
			{
				printf("%c\n",a[j]);
				s=1;
				break;
		    }
	    }
	    if(s==0)
	        printf("no\n");
	} 
	return 0;
}
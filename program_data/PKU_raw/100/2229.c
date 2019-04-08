int main()
{
	int l,cout;
	cout=0;
	char a[400];
	scanf("%s",a);
	l=strlen(a);
	int b[26]={0};
	int c[26]={0};
 
	int i,j,k;
	for(i=0;i<l;i++)
	{	if(64<a[i]&&a[i]<91)
		{   
			for(j=0;j<26;j++)
			{
				if(a[i]==j+65)
			    b[j]=b[j]+1;
				cout++;
			}
		}
		if(96<a[i]&&a[i]<123)
		{
			for(k=0;k<26;k++)
			{
				if(a[i]==k+97)
			    c[k]=c[k]+1;
				cout++;
			}
		}
	}
	if(cout==0)
		printf("No\n");	
	for(i=0;i<26;i++)
	{
		if(b[i])
			printf("%c=%d\n",i+65,b[i]);
	}
	for(i=0;i<26;i++)
	{	if(c[i])
	    printf("%c=%d\n",i+97,c[i]);
	}
	
	return 0;
}


void main()
{
    
	int a[1000];
	char s[1000][30],ch;
	int b[30]={0};
	int i,k;
	int n;
    int max=0;
    
	scanf("%d",&n);
	for(i=0;i<n;i++)
			scanf("%d %s",&a[i],s[i]);
	for(i=0;i<n;i++)
		for(ch='A';ch<='Z';ch++)
			if(strchr(s[i],ch)!=NULL)
				b[ch-65]++;


    for(i=0;i<=26;i++)
		if(b[i]>max)
		{
			max=b[i];
			k=i;
		}
		printf("%c\n%d\n",k+65,max);
		ch=k+65;
    for(i=0;i<n;i++)
           if(strchr(s[i],ch)!=NULL)
			   printf("%d\n",a[i]);
		   
    
	
}

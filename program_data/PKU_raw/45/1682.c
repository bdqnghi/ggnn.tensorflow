void main()
{
	int n,m,z=1,l=0,flag=0;
	int i=0,k=0,num=0;
	char s[50]={0},w[50]={0},mid[50]={0};
	scanf("%s %s",s,w);
	n=strlen(s);
	m=strlen(w);
	for(;l<m-1;)
	{
		for(i=0;i<n;i++,k++)
		{
			mid[i]=w[k];	
		}
		z++;
		k=z;
		num++;
		if(strcmp(mid,s)==0)
		{
			printf("%d\n",num);
			flag=1;
			break;
		}
		l++;
	}
	if(flag==0)
		printf("1");
}

			

		
	


struct book
{
	int num;
	char name[20];
};
void main()
{
	struct book c[1000];
	int i,j,n,k,max,l,d[26],a;
	int b[26]={0};
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
	scanf("%d %s",&c[k].num,c[k].name);
	for(i=0;i<strlen(c[k].name);i++)
	{
		for(j=0;j<26;j++)
		{
			if('A'+j==c[k].name[i])
				break;
        }
		b[j]=b[j]+1;
	}
	}
	for(a=0;a<26;a++)
		d[a]=b[a];
     max=b[0];
	 for(l=0;l<26;l++)
	 if(b[l]>max)
		 max=b[l];
	  for(a=0;a<26;a++)
	{
		if(d[a]==max)
			break;
	}
	printf("%c\n",'A'+a);
	 printf("%d\n",max);
	
	 for(k=0;k<n;k++)
	 {
        for(i=0;i<strlen(c[k].name);i++)
	{
			if('A'+a==c[k].name[i])
			{
	            printf("%d\n",c[k].num);
				break;
			}
	}
	 }
}
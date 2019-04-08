int main()
{
	int n,i,j,k,p,t;
	char a[500];
	scanf("%d\n",&n);
	gets(a);
	p=strlen(a);
	char b[500][500];
	int num[500],mark[500];
	for(i=0;i<500;i++)
	{mark[i]=i;num[i]=0;}
	for(i=0;i<p-n+1;i++)
	{
		for(j=i;j<i+n;j++)
		{
			b[i][j-i]=a[j];
        }
		b[i][j-i]='\0';
    }
	
	for(i=0;i<p-n;i++)
	for(j=i+1;j<p-n+1;j++)
	{
		if(strcmp(b[i],b[j])==0)
		num[i]++;
    }
	for(i=0;i<p-n;i++)
	for(j=i+1;j<p-n+1;j++)
	{
		if(num[j]>num[i])
		{t=num[j];num[j]=num[i];num[i]=t;
		 t=mark[i];mark[i]=mark[j];mark[j]=t;
        }
    }
	if(num[0]==0)printf("NO");
	else
	{

	printf("%d\n",num[0]+1);
	puts(b[mark[0]]);
	for(i=1;;i++)
	{
		if(num[i]<num[0])break;
		else puts(b[mark[i]]);
    }
    }

}
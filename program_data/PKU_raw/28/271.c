void main()
{
	char c[5000];
	int i,j,word=0,num=0,a[300];
	gets(c);
	for(i=0,j=0;i<=strlen(c);i++)
	{
		if(c[i]==' '||c[i]==0)
		{
			if(word==1) {word=0;a[j++]=num;num=0;}
		}
		else
		{
			if(word==0)
			{word=1;num++;}
			else num++;
		}
	}
	printf("%d",a[0]);
	for(i=1;i<j;i++)
		printf(",%d",a[i]);
}
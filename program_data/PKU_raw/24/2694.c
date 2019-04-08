int main()
{
	char ch[10005];

	int m,n,i,k,ch1[2005]={0},max,min,zd,zx,zd1,zx1;
	scanf("%d",&n);
	getchar();
	gets(ch);
	m=strlen(ch);
	for(i=0,k=0;i<m;i++)
	{
		if(ch[i]==' ')
			k=i+1;
		else if(ch[i]==',')
			k=i+1;
		else
		{	
			
			ch1[k]++;
		}
	}
	min=ch1[0];
	zx=0;
	max=ch1[0];
	zd=0;
	for(i=0;i<m;i++)
	{
		if(ch1[i]==0)
			continue;
		if(ch1[i]<min)
		{	
			min=ch1[i];
			zx=i;
		}
		if(ch1[i]>max)
		{	
			max=ch1[i];
			zd=i;
		}
	}
	//printf("??%d ????%d ??%d ????%d\n",max,zd,min,zx);
	zd1=zd;
	for(zd=zd;zd<zd1+max;zd++)
		printf("%c",ch[zd]);
	printf("\n");

	zx1=zx;
	for(zx;zx<zx1+min;zx++)
		printf("%c",ch[zx]);
	printf("\n");
    
	return 0;
}
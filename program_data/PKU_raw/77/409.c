void main()
{
	char s[100],boy;
	int num[100],i,*p,*q,N;
	
	scanf("%c",&s[0]);
	boy=s[0];
	num[0]=0;
	for(i=1;i<=100;i++)
	{
		scanf("%c",&s[i]);
		if(s[i]=='\n')
		{
			N=i-1;break;//
		}
		if(s[i]!=boy)
		{
			num[i]=-1*i;
		}
		if(s[i]==boy)
		{num[i]=i;}
		N=i;
	}

	for(p=num+1;p<num+N;p++)
	{
		if(*p<0)
		{
			q=p;
			while(*(q-1)==0)q--;
			printf("%d %d\n",*(q-1),-1*(*p));
			*p=0;*(q-1)=0;
		}
	}
	printf("0 %d",N);
}
		
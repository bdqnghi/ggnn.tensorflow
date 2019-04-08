int main()
{
	char a[310],b[310]={0};
	gets(a);
	int i,j,t,k=0,l=0;
	t=(int)strlen(a);
	for(j=0;j<27;j++)
	{
		k=0;
		for(i=0;i<t;i++)
			if(a[i]=='a'+j-1)
			{
				k=k+1;
				l=i;
			}
			if(k!=0)
				printf("%c=%d\n",a[l],k);
	}
	if(l==0)
		printf("No");
	return 0;
}


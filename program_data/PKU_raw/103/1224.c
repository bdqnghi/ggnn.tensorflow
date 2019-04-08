
main()
{
	char a[1000];
	scanf("%s",a);
	int i,A,j;
	A=strlen(a);
	int b[1000];           //?????????0???????????
	for(i=0;i<1000;i++)
		b[i]=1; 
	for(i=0;i<A;i++)
	{
		for(j=i+1;j<A;j++)
		{
			if(a[j]==a[i]||a[j]==a[i]-'a'+'A'||a[j]==a[i]-'A'+'a')
				b[i]++;
			else
				break;
				
			
		}
		if(a[i]>='a'&&a[i]<='z')
				a[i]=a[i]-'a'+'A';
		printf("(%c,%d)",a[i],b[i]);
		i=j-1;
	}
}
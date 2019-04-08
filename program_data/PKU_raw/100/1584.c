int main()
{
	char a[1000],c;
	int b[1000],j,i,k;
	gets(a);
	k=strlen(a);
	for(i=0;i<1000;i++)
	{
		b[i]=0;
	}
	for(i=65;i<=90;i++)
	{
		for(j=0;j<k;j++)
		{
			if (a[j]==i)
			{
				b[i]++;
			}
		}
	}
	for(i=97;i<=122;i++){
		for(j=0;j<k;j++){
			if (a[j]==i){
				b[i]++;
			}
		}
	}
	for(i=65;i<=90;i++){
		if (b[i]!=0){
			c=i;
			printf("%c=%d\n",c,b[i]);		
		}
	}
	for(i=97;i<=122;i++){
		if (b[i]!=0){
			c=i;
			printf("%c=%d\n",c,b[i]);		
		}
	}
	i=65;
	while(i<=122)
	{
		if(b[i]!=0){
			break;
		}
		i++;
	}
	if(i==123)
		printf("No");

	return 0;
}

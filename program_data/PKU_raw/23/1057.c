
void main()
{
	char a[101];
	int indexa,indexb,i;
	gets(a);

	indexb=strlen(a)-1;
	while(indexb>0&&a[indexb]==' ')
		indexb--;

	if(indexb==0&&a[indexb]==' ')
		indexb--;

	indexa=indexb-1;
	int num=0;
	while(indexa>=0)
	{
		if(a[indexa]!=' ')
			indexa--;
		else
		{
			if(num!=0)
				printf(" ");
			num++;
			for(i=indexa+1;i<=indexb;i++)
				printf("%c",a[i]);
			indexb=indexa-1;
			while(indexb>0&&a[indexb]==' ')
				indexb--;
			if(indexb==0&&a[indexb]==' ')
				indexb--;
			indexa=indexb-1;
		}
	}

	if(indexb>=0)
	{
		if(num!=0)
				printf(" ");
		num++;
		for(i=0;i<=indexb;i++)
			printf("%c",a[i]);
	}
	printf("\n");
}
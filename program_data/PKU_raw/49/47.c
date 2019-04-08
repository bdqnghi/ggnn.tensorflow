void main()
{
	char a[505];
	int i,j,k,count;
	gets(a);
	
	for(i=2;i<=strlen(a);i++)
		for(j=0;(j+i)<=strlen(a);j++)
		{
			count=0;
			for(k=0;k<(i/2);k++)
				if(a[j+k]==a[j+i-1-k]) count++;
			if(count==i/2) 
			{
				for(k=j;k<j+i;k++)
					printf("%c",a[k]);
				printf("\n");
			}
		}
}

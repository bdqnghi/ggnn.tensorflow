void main()
{
	int i, k;
	char a[14],b[4];
         while (scanf("%s%s",a,b)!=EOF)
	{
				k=0;
		for(i=0;a[i]!='\0';i++)
		   if(a[k]<a[i])
			   k=i;
		for(i=12;i>k+3;i--)
			a[i]=a[i-3];
		for(i=k+1;i<k+4;i++)
			a[i]=b[i-k-1];
		printf("%s\n",a);
	}
}

void main()
{
	int i,j,h,k,r;
	char a[500],b[500],c[500];
	gets(a);
	h=strlen(a);
	for(i=2;i<=h;i++)
	{
		for(j=0;j<=h-i;j++)
		{
			char b[500]={0},c[500]={0};
			for(k=j,r=0;r<i;k++,r++)
			{
				b[r]=a[k];
				c[i-r-1]=a[k];
			}
			if(strcmp(b,c)==0)
				printf("%s\n",b);
		}
	}
}

	
	

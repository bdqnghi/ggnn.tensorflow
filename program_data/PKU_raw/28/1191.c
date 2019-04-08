void main()
{
	char strl[30000];
	int a[300]={0};
	char c;
	int x,y,i,j,k; j=0;
	gets(strl);
		for (i=0;(c=strl[i])!='\0';i++)
		{
			if(c!=' ')
	       a[j]=a[j]+1;
			if(c==' ')
				j++;
		}
		for(x=0;x<=j-1;x++)
			if(a[x]!=0)
			printf("%d,",a[x]);
		    printf("%d",a[j]);
}

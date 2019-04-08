void main()
{
	char a[51],b[51];
	int m,n,i,j,k,x=0;
	scanf("%s%s",a,b);
	m=strlen(a);
	n=strlen(b);
	for(i=0;i<=n-1;i++)
	{	
		if(a[0]==b[i])
		{	
			for(k=0,j=i;a[k]==b[j];k++,j++)
			{	
				if(k==m-1)
				{	
					x=1;
					printf("%d\n",j+1-m);
					break;
				}
			}
			if(x==1)
				break;
		}
	}
}
		


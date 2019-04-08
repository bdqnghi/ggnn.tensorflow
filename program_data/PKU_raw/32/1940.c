void main()
{
	char a0[100],b0[100];
	int i,j,k,l,add,n,x,y,a[100]={0},b[100]={0},c[100][100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{   for(j=0;j<100;j++)
	        a0[i]='\0';
	        b0[i]='\0';
		scanf("%s",a0);
		scanf("%s",b0);
		x=strlen(a0);
		y=strlen(b0);
		for(j=0;j<x;j++)
			if(a0[j]!='\0')
			a[j]=a0[j]-48;
		    
        for(j=0;j<y;j++)
			if(b0[j]!='\0')
			b[j]=b0[j]-48;
					
		for(k=x-1,l=99;k>=0;k--,l--)
			a[l]=a[k];
		for(;l>=0;l--)
			a[l]=0;
		for(k=y-1,l=99;k>=0;k--,l--)
			b[l]=b[k];
		for(;l>=0;l--)
			b[l]=0;
			add=0;
		for(j=99;j>=100-x;j--)
		{
			if((a[j]-add)<b[j])
			{c[i][j]=a[j]+10-b[j]-add;add=1;}
			else
				if((a[j]-add)>=b[j])
				{c[i][j]=a[j]-b[j]-add;add=0;}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<100;j++)
			if(c[i][j]!=0)
				break;
			k=j;
	    for(;k<100;k++)
			printf("%d",c[i][k]);
		printf("\n");
	}
}

void main()
{
	int m,n,i=0,j=0,l=0,k,c,t[3000],d,flag=1,e=0,num;
	char a[3000][500],b[1000][500];
	scanf("%d%d",&m,&n);
	for(c=m;c<=n;c++)
	{
		k=sqrt(c);
		for(i=2;i<=k;i++)
			if(c%i==0)
				break;
			if(i>=k+1&&c!=1)
			{
				t[j]=c;
			//	printf("%d\n",c);
			    j++;
			}
	}
	if(j==0)   printf("no");
	else
	{
		for(i=0;i<j;i++)
		{
			e=0;
			while(t[i]!=0)
			{
				a[i][e]=t[i]%10+'0';
				t[i]=t[i]/10;
				e++;
			}
			a[i][e]='\0';
		//	printf("%s\n",a[i]);
		}
		e=0;
		for(i=0;i<j;i++)
		{

			for(l=0;l<strlen(a[i])/2;l++)
			{
				d=strlen(a[i])-1-l;
				if(a[i][l]!=a[i][d])
				{
					flag=0;
					break;
				}
				else flag=1;
			}
			if(flag)
			{
				for(l=0;l<strlen(a[i]);l++)
				{
					b[e][l]=a[i][l];
				}
		        b[e][l]='\0';
		       //   printf("%s\n",b[e]);
				e++;
				//printf("%d\n",e);
			}
		}
		num=e-1;
		//printf("%d\n",num);
	}
		if(e==0)   printf("no");
		else
		{
			for(i=0;i<num;i++)
				printf("%s,",b[i]);
			printf("%s",b[i]);
		}
}
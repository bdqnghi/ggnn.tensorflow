int main()
{
	
	int n,n1;
	scanf("%d",&n);
	for(n1=0;n1<n;n1++)
	{
		char a[101]={"\0"};
		char b[101]={"\0"};            //????'\0'
		scanf("%s %s",a,b);
		int i;
		int lena=strlen(a),lenb=strlen(b);           //****?????????????strlen(a)???????????????????
        //?????strlen(a)?????“???”......*******???????????????????~~~~~·
		for(i=99;i>=99-lena+1;i--)
		{
			a[i]=a[lena+i-100];
		}
		for(i=99-lena;i>=0;i--)
		{
			a[i]='0';
		}
		for(i=99;i>=99-lenb+1;i--)
		{
			b[i]=b[lenb+i-100];
		}
		for(i=99-lenb;i>=0;i--)
		{
			b[i]='0';
		}

		int c[100]={0};
		for(i=0;i<100;i++)
		{
			c[i]+=a[99-i]-b[99-i];
			if(c[i]<0)
			{
				c[i]=c[i]+10;
				c[i+1]--;
			}
		}
		int test=0;
		for(i=99;i>=0;i--)
		{
			if(c[i]==0&&test==0)continue;
			if(c[i]!=0&&test==0){printf("%d",c[i]);test++;continue;}
			if(test!=0){printf("%d",c[i]);continue;}
		}
		printf("\n");

		
		
	}

	return 0;
}
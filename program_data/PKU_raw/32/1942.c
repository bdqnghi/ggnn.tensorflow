void main()
{
	int n,i,j,t,k,p,lena,lenb;
	char a[101]={0};
	char b[101]={0};
	char c[101]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	
		for(j=0;j<=100;j++)
		{
			a[j]=0;
			b[j]=0;
			c[j]=0;
		}
		scanf("%s",a);
		scanf("%s",b);
		lena=strlen(a);
		lenb=strlen(b);
		t=0;
		p=0;
		for(j=1;j<=lena;j++)
		{
			if(j>lenb)
			{	
			if(t==0)
				c[lena-j]=a[lena-j];
			else if(t==1)
				{	
				if(a[lena-j]=='0')
					{
						c[lena-j]='0'+9;
						t=1;
					}
				else 
					{
						c[lena-j]=a[lena-j]-1;
						t=0;
					}
				}
			}
			else
			{
				p=(a[lena-j]-'0')-t-(b[lenb-j]-'0');
				if(p>=0)
				{
				c[lena-j]=p+'0';
				t=0;
				}
				else 
				{
				t=1;
				c[lena-j]=p+10+'0';
				}
			}
		}
		k=0;
		for(j=0;j<=lena-1;j++)
		{
			if(c[j]!='0')
				k=1;
			if(k)
				printf("%c",c[j]);

		}
		printf("\n");
	}
}
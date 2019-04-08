void main()
{
	int i,t,j,n,len_a,len_b,len_e,temp;
	char a[101],b[101],c[101],d[101],e[101],f[101];
	scanf("%d\n",&n);
	for(j=0;j<n;j++)
	{   
		gets(a);
		gets(b);
		len_a=strlen(a);
		len_b=strlen(b);
		for(i=0;i<len_a/2;i++)
		{
		  temp=a[i];
		  a[i]=a[len_a-i-1];
		  a[len_a-i-1]=temp;
		}
		for(i=0;i<len_b/2;i++)
		{
		  temp=b[i];
		  b[i]=b[len_b-i-1];
		  b[len_b-i-1]=temp;
		}
		for(i=len_b;i<len_a;i++)
		 b[i]='0';
	    for(i=0;i<len_a;i++)
		{
			   
			  t=a[i]-b[i];
		       if(t<0)
			   {
			        t=t+10;
					a[i+1]=a[i+1]-1;
				}
		        a[i]=t-1+'1';
		}
	    for(i=len_a-1;i>=0;i--)
		{
		 if(a[i]!='0')break;
		 else len_a--;
        }
		a[len_a]='\0';
		for(i=0;i<len_a/2;i++)
		{
		  temp=a[i];
		  a[i]=a[len_a-i-1];
		  a[len_a-i-1]=temp;
		}
		puts(a);
		gets(a);
	}
}

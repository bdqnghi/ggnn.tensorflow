int main()
{
	char a[1000],b[50],e[50];
    int c[1000],d[1000];
	int i,n,flag1=0,j=0,m,k,x,l,flag2=0,g;
	gets(a);
	gets(b);
	gets(e);
    n=strlen(a);
	x=strlen(b);
	d[0]=0;
	for(i=0;i<n;i++)
	{
        if(a[i]==' '&&flag1==0)
		{
			c[j]=i;
			d[j+1]=i+1;
			j++;
			flag1=1;
			m=i;
		}
		else
		{
			if(a[i]==' ')
			{
               c[j]=i-m-1;
			   d[j+1]=i+1;
			   j++;
			   m=i;
			}
		}

	}
	c[j]=n-1-m;
    k=j+1;
   for(j=0;j<k;j++)
   {
	   
	   if(c[j]==x)
	   {
		   g=0;
		   for(l=d[j];l<d[j]+c[j];l++,g++)
		   {
                if(b[g]!=a[l])
					flag2=1;
		   }
		   g=0;
		   if(flag2==0)
		   {
                 if(j==0)
					 printf("%s",e);
				 else
					 printf(" %s",e);
		   }
		   else
		   {
			   if(j==0)
                 for(l=d[j];l<d[j]+c[j];l++)
					 printf("%c",a[l]);
				 else
				 {printf(" ");
                   for(l=d[j];l<d[j]+c[j];l++)
					   printf("%c",a[l]);}
		   }
           flag2=0;
	   }
	   else
	   {
		   if(j==0)
                 for(l=d[j];l<d[j]+c[j];l++)
					 printf("%c",a[l]);
				 else
				 {printf(" ");
                   for(l=d[j];l<d[j]+c[j];l++)
					   printf("%c",a[l]);}
	   }
   }


	return 0;

}
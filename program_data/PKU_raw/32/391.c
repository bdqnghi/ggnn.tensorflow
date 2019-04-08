void minus(char *a,char *b,int na,int nb,char *c)
{
	int i;
	for(i=0;i<nb;i++)
   {
	   if((a[i]-b[i])<0)
       {
		   c[i]=10+a[i]-b[i]+'0';
	       a[i+1]--;
	   }
	   else
		   c[i]=a[i]-b[i]+'0';
 
	}
   for(i=nb;i<na-1;i++)
   {
	   if(a[i]<'0')
	   {   
		   a[i]=a[i]+10;
		   a[i+1]--;
	   }
	   c[i]=a[i];
   }
   c[na-1]=a[na-1];
   }
void exchange(char *a,int na)
{
 int k;
 for(k=1;k<=(na/2);k++)
		{
			int t;
			t=a[k-1];
			a[k-1]=a[na-k];
			a[na-k]=t;
		}
}
void main()
{
    int n,i,k,j;
	scanf("%d",&n);
	char **c;
	c=(char**)malloc((n+1)*sizeof(char *));
	if(c!=NULL)
    {char a[100]
,b[100];
	int na,nb;
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		scanf("%s",b);
		na=strlen(a);
		nb=strlen(b);
	    exchange(a,na);
		exchange(b,nb);
		c[i]=(char*)malloc((na+1)*sizeof(char));
		if(c[i]!=NULL)
		minus(a,b,na,nb,c[i]);
	}
	for(i=0;i<n;i++)
	{
		for(k=strlen(c[i])-1;k>0;k--)
	   {
		 if(c[i][k]>'0')
			 break;
		}
		for(j=k;j>=0;j--)
		{
			printf("%c",c[i][j]);
			if(j==0)
				printf("\n");
		}
		free(c[i]);
	}
	free(c);
	}
}

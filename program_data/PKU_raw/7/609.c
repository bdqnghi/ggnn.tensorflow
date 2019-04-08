int main()
{
	char a[100],b[100],c[100],d[100];
	int sum=0,i,j,k,n,m,h=0,y=0;
	gets(a);
        gets(b);
	gets(c);
	n=strlen(a);
	m=strlen(b);
	k=strlen(c);
	for(i=0;i<n;i++)
	{
		if(a[i]==b[0])
		{
                    for(j=0;j<m;j++)
		   {
		      if(b[j]==a[i+j])
		       sum++;
		    }                    //?????????????????????
		   if(sum==m&&y==0)
		   { 
	              for(j=0;j<k;j++)
                      d[h+j]=c[j];
		      i=i+m;
		      h=h+k;
		      y=1;
		    }
		   sum=0;
		}
    d[h]=a[i];
    h++;
	}
	d[h]='\0';
	printf("%s\n",d);
    return 0;  
}
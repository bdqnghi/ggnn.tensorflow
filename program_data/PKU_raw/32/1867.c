void subtr(char a[101],char b[101])
{
	int c[101];
	int i,k,d=0;
	for(i=0;i<=100;i++)
	{
		a[i]=a[i]-'0';
		b[i]=b[i]-'0';
	}
	for(i=100;i>=0;i--)
	{
		if ((a[i]-b[i])<0)
		{
			a[i-1]=a[i-1]-1;
			c[i]=a[i]+10-b[i];
		}
		else
		{
			c[i]=a[i]-b[i];
		}
	}
	for(k=0;k<100;k++)
		{
			if (c[k]==0)
				d++;
			else break;
		}
		for(k=d;k<101;k++)
			printf("%d",c[k]);
        printf("\n");
		
}
	
void main ()
{
	int l,k,i,j;
        int l1[20],l2[20];
	char m;
	char a[20][101],b[20][101];
	char c[101],d[101];
	     
	scanf("%d",&l);
        for(i=1;i<=l;i++)
	{
		for(j=1;j<=100;j++)
		{
			a[i][j]='\0';
			b[i][j]='\0';
		}
	}
	for(i=1;i<=l;i++)
	{
		scanf("%s",&a[i]);
		scanf("%s",&b[i]);
	}
	for(i=1;i<=l;i++)
        { 
          l1[i]=0;
          l2[i]=0;
          for(j=0;j<100;j++)
           {
             if(a[i][j]!='\0')
             l1[i]=l1[i]+1;
            }
          for(j=0;j<100;j++)
           {
           if(b[i][j]!='\0')
             l2[i]=l2[i]+1;
           }
	}
		
	
	
	for(i=1;i<=l;i++)
	{
		for(j=0;j<100;j++)
		{	
			c[j]=a[i][j];
			d[j]=b[i][j];
		}
		for(k=100;k>=(101-l1[i]);k--)
		{
			c[k]=c[k-(101-l1[i])];
		}
		
		for(k=0;k<(101-l1[i]);k++)
			c[k]='0';

		for(k=100;k>=(101-l2[i]);k--)
		{
			d[k]=d[k-(101-l2[i])];
		}
		for(k=0;k<(101-l2[i]);k++)
			d[k]='0';
		

		subtr(c,d);
	}
}


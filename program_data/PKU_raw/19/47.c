void main()
{   int i,r=1,j;
	char a[100],b[100],c[200];
	gets(c);
	gets(a);
	gets(b);
    for(i=0;i<100;i++)
	{
		if(c[i]=='G'&&c[i+1]=='I'&&c[i+2]=='S'&&c[i-1]==' ')
		{
			for(j=100+r*3;j>=(i+3);j--)
				c[j]=c[j-3];
			r=r+1;
			c[i]='W';
			c[i+1]='e';
            c[i+2]='b';
            
        }
		if(c[i]=='Y'&&c[i+1]=='o'&&c[i+2]=='u')
		{
			
			c[i]='I';
			for(j=i+1;j<100;j++)
				c[j]=c[j+2];
	
            
        }
		if(c[i]=='o'&&c[i+1]=='f'&&c[i-1]==' ')
		{
			for(j=100+r*1;j>=(i+1);j--)
				c[j]=c[j-1];
			r=r+1;
			c[i]='f';
			c[i+1]='o';
            c[i+2]='r';
            
        }

	}
	printf("%s",c);
}

				

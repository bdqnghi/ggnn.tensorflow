void main()
{
	int a[6][1],i,c[6];
	int reverse(int x,int z);
	for(i=0;i<=5;i++)
		scanf("%d",&a[i][0]);
	for(i=0;i<=5;i++)
		c[i]=reverse(a[i][0],i);
    for(i=0;i<=4;i++)
		printf("%d\n",c[i]);
    printf("%d",c[5]);
		
}

int reverse(int x,int z)
{
	int b[6][100],m,j,f,c,d,e,y=0;
	if(x==0)
		y=0;
	else if(x>0)
    {
        m=log10(x);
        for(j=m;j>=0;j--)
		{
        f=pow(10,j+1);
	    c=pow(10,j);
		d=x%f-x%c;
		e=d/c;
		b[z][j]=e;
		}
		for(j=0;j<=m;j++)
          y=y+b[z][j]*pow(10,m-j);
	}
	else if(x<0)
    {  
		x=(0-x);
		m=log10(x);
        for(j=m;j>=0;j--)
		{
        f=pow(10,j+1);
	    c=pow(10,j);
		d=x%f-x%c;
		e=d/c;
		b[z][j]=e;
		}
		for(j=0;j<=m;j++)
            y=y+b[z][j]*pow(10,m-j);
		y=(0-y);
	}
	return(y);
}
        

void main()
{
	int w,z[12]={0,31,28,31,30,31,30,31,31,30,31,30},i,k,j,l;
	int function(int,int);
	int o[12]={0};
	scanf("%d",&w);
	for(i=0;i<12;i++)
	{
            for(j=0;j<=i;j++)
		{
			o[i]=o[i]+z[j];
		}
	}
	for(i=0;i<12;i++)
	{
		k=function(w,o[i]);
		if(k!=0)
		{
                            l=i+1;
			printf("%d\n",l);
		}
		else continue;
	}
}

int function(int x,int y)
{
	int z=0,u;
	u=(x+y+13-1)%7;
	if(u==5)
	{
		z=1;
	}
	return(z);
}
int main()
{
	int a[99],b[99],c[99],d[99],e[99],f[99],i;
	int z[99];
	for(i=0;a[i]!=0;i++)
	{
	    scanf("%d %d %d %d %d %d\n",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
	}
		for(i=0;a[i]!=0;i++)
		{
			if(f[i]>c[i])
			{
		       e[i]=e[i]-1;
		       f[i]=f[i]+60;
			}
	
	        if(b[i]<e[i])
			{
		        d[i]=d[i]-1;
		       e[i]=e[i]+60;
			}
            d[i]=d[i]+12;
	        d[i]=d[i]-a[i];
	        z[i]=d[i]*3600;
	        e[i]=e[i]-b[i];
	        z[i]=z[i]+e[i]*60;
	        z[i]=z[i]+f[i]-c[i];

		}
		for(i=0;a[i]!=0;i++)
		{
		     printf("%d\n",z[i]);
		}
return 0;
}

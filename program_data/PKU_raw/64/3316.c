int main()
{
	int n,b,c,i,j,k,e,g;
	scanf("%d",&n);
	int sa[11],sb[11],sc[11];
	for(i=0;i<n;i++)
	{
        scanf("%d%d%d",&sa[i],&sb[i],&sc[i]);
	}
    
	int s[51],y[51],z[51];
	double l[51],f;
	i=0;
    for(j=0;j<n-1;j++)
	{
		   for(k=j+1;k<n;k++)
		   {
		      s[i]=(sa[j]-sa[k])*(sa[j]-sa[k])+(sb[j]-sb[k])*(sb[j]-sb[k])+(sc[j]-sc[k])*(sc[j]-sc[k]);
			  l[i]=sqrt(s[i]);
			  y[i]=j;
			  z[i]=k;//??????

			  i++;
		   }
	}
	
	for(i=1;i<=(n*(n-1)/2);i++)
	{
		for(j=0;j<(n*(n-1)/2-i);j++)
		{
			if(l[j]<l[j+1])
			{
				f=l[j];
				l[j]=l[j+1];
				l[j+1]=f;//????
			    e=y[j];
                y[j]=y[j+1];
                y[j+1]=e;
                g=z[j];
                z[j]=z[j+1];
                z[j+1]=g;//???????
			}	
		}
	}
	for(i=0;i<(n*(n-1)/2);i++)
	{
		
		b=y[i];
		c=z[i];
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",sa[b],sb[b],sc[b],sa[c],sb[c],sc[c],l[i]);
	}
	return 0;
}
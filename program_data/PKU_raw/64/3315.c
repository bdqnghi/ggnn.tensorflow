

int main()
{
    int n,b,c;
	scanf("%d",&n);
	int i,j,sa[11],sb[11],sc[11];
	for(i=0;i<n;i++)
	{
        scanf("%d%d%d",&sa[i],&sb[i],&sc[i]);
	}
    
	int s[51],k,y[51],z[51];
	double l[51];
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
	int e,g;
	double f;
	for(k=1;k<=i;k++)
	{
		for(j=0;j<(i-k);j++)
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
	for(j=0;j<i;j++)
	{
		
		b=y[j];
		c=z[j];
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",sa[b],sb[b],sc[b],sa[c],sb[c],sc[c],l[j]);
	}
	return 0;
}
void main ()
{
	int jud(int x[1000],int y[1000],int m);
	int n,a[1000],b[1000],c[1000],i=0,j,re;
	scanf ("%d",&n);
	while (n!=0)
	{
		for (j=0;j<n;j++)
		scanf ("%d",&a[j]);
		for (j=0;j<n;j++)
		scanf ("%d",&b[j]);
		c[i]= jud (b,a,n);
		i++;
		scanf ("%d",&n);
	}
	for (j=0;j<i;j++)
	{
		 printf ("%d\n",c[j]);
	}
	
}

int jud (int x[1000],int y[1000],int m)
{
	int s,i,j;
	void  arrange (int p[1000],int k);
	int result (int a[1000],int b[1000],int n,int i);
	arrange (x,m);
	arrange (y,m);
	s=result (x,y,m,0);
	for (i=1;i<m;i++)
	{
		j=result (x,y,m,i);
		if (s<j) s=j;
	}
	return (s);
}

void arrange (int p[1000],int k)
{
	int i,j,mid;
	for (i=0;i<k;i++)
	   for (j=i+1;j<k;j++)
	   {
	   	   if (p[i]<p[j]) 
	   	   {
	   	   	mid=p[i];
	   	   	p[i]=p[j];
	   	   	p[j]=mid;
			  }
	   }
}

int result (int a[1000],int b[1000],int n,int i)
{   
    int p,q,s=0;
    for (p=0;p<n;p++)
      {
      	    q=p+i;
			if (q>=n) q=q-n;
			if (a[p]>b[q]) s=s-200;
			 else if (a[p]<b[q]) s=s+200;   
	  	  }
 	  return (s);
}
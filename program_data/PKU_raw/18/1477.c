void xiao(int a[100][100],int n)
{   int min,i,j;
	for(i=0;i<n;i++)
	{  min=a[i][0];
		for(j=0;j<n;j++)
		if(a[i][j]<min)min=a[i][j];
		if(min>0)
		for(j=0;j<n;j++)
		a[i][j]=a[i][j]-min;
	}
	  
    for(j=0;j<n;j++)
	{   min=a[0][j];
	   for(i=0;i<n;i++)
		if(a[i][j]<min)min=a[i][j];
		if(min>0)
	    for(i=0;i<n;i++)
	    a[i][j]=a[i][j]-min;
	}
}
void move(int a[100][100],int n)
  { int i,j;
  for(i=0;i<n;i++)
	  for(j=2;j<n;j++)
		  a[i][j-1]=a[i][j];
	  for(j=0;j<n;j++)
		  for(i=2;i<n;i++)
			  a[i-1][j]=a[i][j];
  }


int count(int a[100][100],int n,int s)
{   if(n==1) return(s);
    else {xiao(a,n);
	      s=s+a[1][1];
		  move(a,n);
	      return(count(a,n-1,s));
	}

}    
int main()
{
	int n,i,j,s,t,a[100][100];
	scanf("%d",&n);
	t=n;
	while(t>0)
	{	s=0;
	   for(i=0;i<n;i++)
	   for(j=0;j<n;j++)
	   scanf("%d",&a[i][j]);
	   printf("%d\n",count(a,n,s));
	   t--;
	}
}



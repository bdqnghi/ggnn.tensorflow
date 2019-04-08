int main(int argc, char* argv[])
{
	int n,a[99999],b[2],i,k,m,s[99999],first=0,x,y;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
		for (k=0;k<2;k++)
		{
			scanf("%d",&b[k]);
		}
		s[i]=b[0]+b[1];						
	}
	
	for (m=0;m<3;m++)
	{ first=0;
		for (x=0;x<n;x++)
		{
			   
		       if (s[x]>first)
			   {first=s[x];
			   y=x+1;
			   }
			   

		}
		printf ("%d %d\n",y,first);
	    s[y-1]=0;

	}
	return 0;
}

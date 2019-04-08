int main()
{
	float f(int j);
	int i,n,m,k;
	float s=0;
	scanf("%d\n",&m);
	for(k=0;k<m;k++)
	{s=0;
		scanf("%d",&n);
	    for(i=0;i<n;i++)
		
         s=s+f(i+3)/f(i+2);
         	printf("%.3lf\n",s);
			
	}
	

	return 0;
	
}
 float f(int j)
 { int c;
	 if (j==1||j==2)
		 c=1;
	 else c=f(j-1)+f(j-2);
	 return(c);
 }
 


int main()
{
	int king(int n,int m);
	int n,m,i,cycle;
         cycle=0;
	int k[30]={0};
	while(scanf("%d %d",&n,&m))
	{
		if((n!=0)&&(m!=0))
		{
			k[cycle]=king(n,m);
			cycle++;		
		}
		else
			break;
	}

	for(i=0;i<cycle;i++)
		printf("%d\n",k[i]);

	return 0;
}


int king(int n,int m)
{
	int s,b,i,j,k;
    int*a=(int*)malloc(sizeof(int)*n);
         s=0;
         b=1;
         i=0;
	for(i=0;i<n;i++)
		a[i]=1;
	
	i=0;

	 while(s!=1)
	 {   
		 s=0;
		 if(i==n)
		 {
			 i=0;
			 continue;
		 }
		 else
		 {
		     if(a[i]==0)
			 {
			     i++;
			     continue;
			 }
		     else
			 {
	 	         if(b!=m)
				 {
			        b++;             
				 }
		         else 
				 {
			         b=1;
			         a[i]=0;
				 }
			     i++;
			 }
		 }
		 for(j=0;j<n;j++)
			 s=s+a[j];
	 }

	 for(i=0;i<n;i++)
	 {
		 if(a[i]==1)
			 k=i+1;	
	 }
	 return k;
	 free (a);
}

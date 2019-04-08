int main()
{
	int n,m,i,j;
	int houwang(int n,int m);
	int y[100];
	for(i=0;i<100;i++)
	{
		scanf("%d%d",&n,&m);
		if(n==0&&m==0)
			break;
		else 
		    y[i]=houwang(n,m);	
	}
	for(j=0;j<i;j++)
		printf("%d\n",y[j]);
	return 0;
}
int houwang(int n,int m)
{
	int s=0,b=1,i=0,j,king;
         int a[301];
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
			 s+=a[j];
	 }

	 for(i=0;i<n;i++)
	 {
		 if(a[i]==1)
			 king=i+1;	
	 }
	 return king;
}


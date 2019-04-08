
int main()
{  int N;
    scanf("%d",&N); 
int zs[N];
     
	int i,j;
    for(i=0;i<N;i++)
			
	{
	 scanf("%d\n",&j);
          zs[i]=j;
	}
	int m;
	for(m=0;m<N-1;m++)
	{
		if(zs[m]>zs[m+1])
		{
                     int l;
		   l=zs[m];
		   zs[m]=zs[m+1];
		   zs[m+1]=l;
		}
		
	} 
	printf("%d\n",zs[N-1]);
  	int n;
         for(n=0;n<N-2;n++)
 	{
		if(zs[n]>zs[n+1])
		{
                     int e;
		   e=zs[n];
		   zs[n]=zs[n+1];
		   zs[n+1]=e;
		}
		
	} 
	printf("%d",zs[N-2]);

	return 0;
}


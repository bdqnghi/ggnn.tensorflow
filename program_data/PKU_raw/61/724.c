
int main()
{

	int a,b[30],n,i=0,j=2,sum=2;
     scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	 scanf("%d",&a);
     b[0]=1;
	 b[1]=1;
	
    for(j=2;j<a;j++)
	 {
	 b[j]=b[j-1]+b[j-2];
	 
	}
	printf("%d\n",b[j-1]);
	 }
	    
	return 0;
}

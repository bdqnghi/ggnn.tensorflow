
void main()
{
	int i,k,j,n,test,a[50];
	scanf("%d%d",&n,&k);
    for(i=n+k;;i=i+n)
	{
		    a[0]=i;
	    	for(j=0;j<n-1;j++)
			{
			    test=n*a[j]-k+n*k;
			    if(test%(n-1)!=0)
				{
				  j=0;
			      break;
				}
		     	else
				a[j+1]=test/(n-1);
			}

		    if(j==n-1){
			printf("%d\n",a[n-1]);
			break;
			}
	}

}
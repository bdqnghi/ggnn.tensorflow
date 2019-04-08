int main()
{
     int n,i,j;
     int a[100]={0};
	 scanf("%d",&n);
     a[0]=1;
	 for(i=0;i<n;i++)
	 {
	     for(j=0;j<100;j++)
	        a[j]=a[j]*2;
	    for(j=0;j<100;j++)
	    {
	        if(a[j]>=10)
	        {
	           a[j+1]=a[j+1]+a[j]/10;
	           a[j]=a[j]%10;
			
			}
		
		}
	 
	 
	 }     
    for(i=99;i>=0;i--)
     if(a[i]!=0) break;
     for(j=i;j>=0;j--)
     printf("%d",a[j]);
	 return 0;





}
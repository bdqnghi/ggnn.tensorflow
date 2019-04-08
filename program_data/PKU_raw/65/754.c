int main()
{
	int n,i,a[200],b[200],sum=0;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{

		scanf("%d%d",&a[i],&b[i]);
          if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0))
			  sum++;
            else if((b[i]==0&&a[i]==1)||(b[i]==1&&a[i]==2)||(b[i]==2&&a[i]==0))
              sum--;
          else if((b[i]==0&&a[i]==0)||(b[i]==1&&a[i]==1)||(b[i]==2&&a[i]==2))
              sum=sum;
		  }
	if(sum>0)
		printf("A");
	  
            else if(sum==0)
             printf("Tie"); 
          else if(sum<0)
             printf("B");
	return 0;
}
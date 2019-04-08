
int main(int argc, char* argv[])
{
	int n,j,i,a[100];
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	}
	  for(j=n-1;j>=1;j--)
	 {
		  printf("%d ",a[j]);
		  
	  }
	 
	printf("%d\n",a[0]);
	
	   
	return 0;
}


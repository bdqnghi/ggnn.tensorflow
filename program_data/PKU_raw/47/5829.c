int main()
{

	int n=0;
	cin>>n;
	int a[100]={0},b[100]={0};
	for(int i=0;i<n;i++)
	{ 
		scanf("%d",&a[i]);            //????
	}
	
	for(int i=0;i<n;i++)             //????
		b[i]=a[n-i-1];
  for(int i=0;i<n-1;i++)
	{ 
                printf("%d ",b[i]);   //????
                                  }
   printf("%d",b[n-1]);
}
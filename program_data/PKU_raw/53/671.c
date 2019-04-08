int main()
{
    int a[300],b[300]={0,0},j,n,i,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
         scanf("%d",&a[i]);
    for(i=0;i<n;i++)
	   for(j=n-1;j>i;j--)
		   if(a[i]==a[j]&&a[i]!=0)
			   a[j]=0;
		   printf("%d",a[0]);
		   for(i=1;i<n;i++)
			   if(a[i]>0)
				   printf(",%d",a[i]); 	   
}

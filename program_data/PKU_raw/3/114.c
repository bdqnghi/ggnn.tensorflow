

int main(int argc, char* argv[])
{
   int i,j,n,k,b,judge=0;
   scanf("%d",&n);
   scanf("%d",&k);
   int a[1001];
   for(i=1;i<n+1;i++)
   {
	   scanf("%d",&a[i]);
   }
   for(i=1;i<n+1;i++)
   {
	   for(j=1;j<n+1;j++)
	   {
		   if(i!=j)
		   {
			   b=a[i]+a[j];
			   if(b==k)
			   {
				   printf("yes");
			       judge=1;
				   break;
			   }
		   }
	   }
   if(judge==1)
	   break;
   
   if(i==n)
   {
	   printf("no");
   }
   
   
   }
	return 0;
}
void main()
{
   int i,n,k,l=1,a[100];
   scanf("%d %d",&n,&k);
   for(l=1;;l++)
   {i=n;
   a[i]=n*l+k;i--;
   while(i>0)
    {
       if(a[i+1]%(n-1)==0)
       {
       a[i]=(a[i+1]/(n-1))*n+k;
       i--;
       }
       else break;
    }
    if(i==0)
	printf("%d",a[1]);
	if(i==0)break;
   }
}
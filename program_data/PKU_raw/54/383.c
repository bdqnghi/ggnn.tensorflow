
void main()
{
	int n,k,a[300],i,j;
	scanf("%d%d",&n,&k);
	for(j=1;;j++)
	{
	  a[n]=n*j+k;
	  for(i=n;i>1;i--)
	{
		  if(a[i]%(n-1)!=0) break;
		  
		  else a[i-1]=n*a[i]/(n-1)+k;
	}
	  if(i==1) {printf("%d",a[1]);break;}
	}
}
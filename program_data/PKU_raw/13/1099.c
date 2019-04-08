int a[101];
int main()
{
  int q=0,temp,n,i,flag=0,t[200];
  memset(a,0,sizeof(a));
  	scanf("%d",&n);
  	for(i=0;i<n;i++)
  	{ 
	  scanf("%d",&temp);
	  if(a[temp]==0)
	  t[q++]=temp;
	  a[temp]++;	  	
    }
    for(i=0;i<q;i++)
    {
    	if(flag==0) flag=1;
    	else printf(" ");
    	printf("%d",t[i]);
    }
}
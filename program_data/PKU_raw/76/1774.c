int main()
{
	struct point
	{
		int a,b;
	}
	c[50001],t;
	int n,i,j;
	scanf("%d",&n);
	for (i=1;i<=n;i++) scanf("%d%d",&c[i].a,&c[i].b);
	for (i=1;i<n;i++)
	  for (j=n;j>i;j--)
	  {
  		 if (c[j].a<c[j-1].a) 
  		 {
 		  	t=c[j];c[j]=c[j-1];c[j-1]=t;
         }
  	  }
     int st=c[1].a,en=0;
     for (i=1;i<n;i++)
     {
     	if (c[i].b>en) en=c[i].b;
        if (en<c[i+1].a) break;
     	
     }
     if (i<n) printf("no");
       else printf("%d %d",st,en);
     return 0;
}
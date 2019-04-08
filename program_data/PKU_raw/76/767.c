int main()
{
	struct qujian
	{
		int zen,xiao;
	} a[10000];
	int i,n,b,c,t,j,min,max,m;
	scanf("%d",&n);
	t=0;
	max=0;
	m=0;
    for (i=1;i<=n;i++){
	   scanf("%d %d",&b,&c);
		   if (t==0){
			   min=b;
		       t=1;
		   }
		   if (b<min) min=b;
		   if (c>max) max=c; 
	   for (j=b;j<c;j++){
		   a[j].zen=1;
		   a[j].xiao=1;
	   }
	   a[c].zen=1;
     
	}
      for (j=min;j<max;j++)
		   if ((a[j].zen!=1) || (a[j].xiao!=1)){
			   m=1;
			   printf("no\n");
			   break;
		   }
       if (m==0) printf("%d %d\n",min,max);
	return 0;
}
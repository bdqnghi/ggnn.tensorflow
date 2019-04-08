void main()
{
 int n,b=-1,i,j,t,m=0,a[10000];
 scanf("%d",&n);
 for(i=3;i<=n;i++)
 {
 	t=1;
    for(j=2;j*j<=i;j++)
      if(i%j==0)
      {t=0;break;}
	if(t==1)
	{b++;a[b]=i;}    	
 }
 for(i=0;i<b;i++)
   if(a[i+1]-a[i]==2)  {m=1;printf("%d %d\n",a[i],a[i+1]);}
 if(m==0)  printf("empty");
}
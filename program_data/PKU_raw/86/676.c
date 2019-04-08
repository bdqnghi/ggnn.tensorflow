int main()
{
    int time,n,m,i,j,k,a[61];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { scanf("%d",&m);
      for(j=1;j<=m;j++) scanf("%d",&a[j]);
      k=1; time=0;
      for(j=1;j<=60;j++) 
	  { 
           time++;
           if(time==a[k])
                         {k++;j=j+3;}
         }
	  for(j=1;j<=m;j++) a[j]=0;
       printf("%d\n",time);
    }
return 0;
}

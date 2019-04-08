void main()
{ int n,i,j;float t,sum,b[100];unsigned a[100],max,min;
     scanf("%d",&n);
    for(i=0;i<n-1;i++)
   scanf("%u ",&a[i]);scanf("%u",&a[n-1]);
    sum=0.0;
     for(i=0;i<n;i++)
     sum=sum+a[i];
     t=sum/n;
   max=a[0];min=a[0];
   for(i=0;i<n;i++)
   {if(a[i]>max)max=a[i];if(a[i]<min)min=a[i];}
      if(max-t==t-min)printf("%d,%d",min,max);
    else if(max-t>t-min)printf("%d",max);
    else printf("%d",min);
}
    
    
 
void main()
{ unsigned a[100],max,min,t;char c;int i,j,k,r;
     scanf("%u",&a[0]);
     c=getchar();
   if(c=='\n')printf("No");
    if(c==',') 
     {scanf("%u",&a[1]);
    for(i=2;(c=getchar())==',';i++)
    scanf("%u",&a[i]);
    k=i;
       max=a[0];min=a[0];
   for(j=0;j<k;j++)
  { if(a[j]>max)max=a[j];
   if(a[j]<min)min=a[j];}
    if(max!=min)
    {for(r=0;r<k;r++)
      if(a[r]==max)a[r]=min;
      t=a[0];
   for(r=0;r<k;r++)
    if(a[r]>t)t=a[r];
  printf("%u",t);}
    else printf("No");
 }
}

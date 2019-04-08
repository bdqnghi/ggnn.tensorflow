void main()
{
 char a[100],b[100];
 int n,m,k,i,j,l,o,p,c,d,b1,b2,h=1;
 scanf("%s%s",a,b);
 n=strlen(a);
 m=strlen(b);
 if(n!=m)
  printf("%s","NO");
 else
  {
   for(i=0;i<n;i++)
    (int)a[i];
   for(j=0;j<m;j++)
    (int)b[j];
   for(c=0;c<n-1;c++)
     {
      for(d=0;d<n-1-c;d++)
       if(a[d]>=a[d+1])
        {
         b1=a[d];
         a[d]=a[d+1];
         a[d+1]=b1;
        }
     }
   for(o=0;o<m-1;o++)
    {
     for(p=0;p<m-1-o;p++)
      if(b[p]>=b[p+1])
       {
        b2=b[p];
        b[p]=b[p+1];
        b[p+1]=b2;
       }
    }
   for(k=0;k<n;k++)
    {
     if(a[k]!=b[k])
      h=0;
    }
   if(h==0)
    printf("%s","NO");
   else printf("%s","YES");
  }
}
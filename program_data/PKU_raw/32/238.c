 void main()
{
 int n,lengtha,lengthb,i,j,k,l;
 char a[100],b[100],c[100];
 scanf("%d",&n);
 for(i=1;i<=n;i++)
  {
   scanf("%s\n",a);
   scanf("%s\n",b);
   lengtha=strlen(a);
   lengthb=strlen(b);
   for(j=1;j<=lengthb;j++)
     {
      if (a[lengtha-j]>=b[lengthb-j])
        c[lengtha-j]=a[lengtha-j]-b[lengthb-j];
      else
        { c[lengtha-j]=a[lengtha-j]-b[lengthb-j]+10;
         a[lengtha-j-1]=a[lengtha-j-1]-1;}
      }
     if(a[lengtha-j]<0)
       {
        a[lengtha-j]=a[lengtha-j]+10;
        a[lengtha-j-1]=a[lengtha-j-1]-1;
        }
      for(k=lengtha-j;k>=0;k--)
         c[k]=a[k]-48;
      for(l=0;l<lengtha;l++)
        printf("%d",c[l]);
        printf("\n");
   }
}
     

   

   

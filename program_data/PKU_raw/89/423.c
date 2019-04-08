int main()
{
    int a[100000],b[100000],i=0,l=0,n,j,s,c[100000],d[100000];
    scanf("%d",&n);
    for (;;)
    {
          scanf("%d %d",&a[i],&b[i]);
          if (a[i]==0&&b[i]==0)
           break;
           l++;//l?++???break????break??l??????0????????? 
           i++;//??????i++??i???? 
    }
    for (j=0;j<n;j++)
     {
       c[j]=j;
       d[j]=0;
       for (i=0;i<l;i++)
       {
           if (a[i]==c[j])
            c[j]=-1;
           if (b[i]==c[j])
            d[j]++;
       }
     }
     s=0;
     for (j=0;j<n;j++)
       {
         if (d[j]==(n-1)&&c[j]!=-1)//??d[j]??n-1?????????????????????????? 
         {
           printf ("%d\n",j);
           s++;
         }
       }
     if (s==0)
     printf("NOT FOUND\n");
     getchar();
     getchar();
}
    

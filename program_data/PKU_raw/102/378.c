struct l
{
       char s[10];
       float h;
} a[40];
main()
{
      int i=0,j=0,k=0,w=0,n;
      float b[40],c[40],tmp=0;
      scanf("%d",&n);
      for(i=0;i<=n-1;i++)
      scanf("%s%f",a[i].s,&a[i].h);
      for(i=0;i<=n-1;i++)
      {
                         
                         if(strcmp(a[i].s,"male")==0)
                         {b[j]=a[i].h;j++;}
                         if(strcmp(a[i].s,"female")==0)
                         {c[k]=a[i].h;k++;}
      }
      for(w=j-1;w>0;w--)
      {
      for(i=0;i<=j-2;i++)
      {if(b[i]>b[i+1])
      {tmp=b[i+1];
       b[i+1]=b[i];
       b[i]=tmp;
                     }}}
                     for(w=k-1;w>0;w--)
                     {
       for(i=0;i<=k-2;i++)
      {if(c[i]<c[i+1])
      {tmp=c[i+1];
       c[i+1]=c[i];
       c[i]=tmp;
                     }}}
                     for(i=0;i<=j-1;i++)
                     printf("%.2f ",b[i]);
                      for(i=0;i<=k-2;i++)
                     printf("%.2f ",c[i]);
                     printf("%.2f",c[i]);
                                                     
      getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();
}
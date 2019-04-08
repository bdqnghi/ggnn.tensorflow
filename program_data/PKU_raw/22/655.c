void main()
{
     char c[1000];
     int j=1,i,m,n,k=2,a[1000],t;
     for(i=1;i<=1000;i++)
    {
        scanf("%d%c",&a[i],&c[i]);
        if(c[i]==',')
        j++;
        else if(c[i]=='\n')
        continue;
    }
    for(i=1;i<=j-1;i++)
    {
        for(m=j;m>i;m--)
        if(a[i]<a[m])
          t=a[i],a[i]=a[m],a[m]=t;
     }
    if(a[1]==a[j])
         printf("No\n");
    else
    {
       for(i=1;i<=j;i++)
       {
          n=i+1;
          if(a[i]==a[n])
          k++;
          else break;
       }
    printf("%d",a[k]);
}
}


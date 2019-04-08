main()
{   int n,i,j,k,l,len,max[501],da;
    char s[501],a[501][6];
    scanf("%d\n",&n);
     gets(s);
      for(i=0;i<501;i++)
     max[i]=1;
     len=strlen(s);j=0;k=0;
    while(j<=len-n)
    {  i=0;
       while(i<n)
      { a[j][i]=s[k];k++;i++; } 
       j++;k=j;    }
      for(i=1;i<=len-n;i++)
      if(strcmp(a[0],a[i])==0)
      max[0]++;
      for(l=1;l<=len-n;l++)
     { for(i=l+1;i<=len-n;i++)
      if(strcmp(a[l],a[i])==0)
      max[l]++;}
        da=max[0];
        for(j=1;j<=len-n;j++)
        if(max[j]>da)
          da=max[j];
            if(da<=1)printf("NO");
            else{   printf("%d\n",da);
        for(j=0;j<=len-n+1;j++)
        {        if(max[j]==da)
         puts(a[j]);}
                }
}
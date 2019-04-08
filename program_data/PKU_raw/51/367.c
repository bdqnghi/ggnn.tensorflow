main()
{   int da,i,j,x,len,n,max[501];
    char s[501],a[501][6];
       scanf("%d\n",&n);
	   gets(s);
    len=strlen(s);
    for(i=0;i<=len-n;i++)
    max[i]=1;
    x=0;j=0;
    while(j<=len-n)
    {  i=0;
    while(i<n)
    {  a[j][i]=s[x];i++;x++;
    }
       j++;x=j;
    }
    for(i=1;i<=len-n;i++)
    if(strcmp(a[0],a[i])==0)
    max[0]++;
    da=max[0];
    for(i=1;i<=len-n;i++)
    for(j=i+1;j<=len-n;j++)
    if(strcmp(a[i],a[j])==0)
    max[i]++;
        for(i=0;i<=len-n;i++)
        if(max[i]>da)
        da=max[i];
    if(da<=1)
    printf("NO");
    else { printf("%d\n",da);  
	    for(j=0;j<=len-n;j++)
       if(max[j]==da)
       puts(a[j]);
    }
    
} 
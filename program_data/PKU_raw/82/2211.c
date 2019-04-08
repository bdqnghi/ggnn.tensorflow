int m(int p,int q)
{int z;
z=(p>q)? p:q;
return z;
}
main()
{   
    int i,x,j,y,n,r;
    scanf("%d",&n);
    int a[n],t[n];
    for(i=1;i<=n;i++)
    {t[i-1]=0;
        scanf("%d %d",&x,&y);
        if(x>=90&&x<=140&&y<=90&&y>=60) a[i-1]=1;else a[i-1]=0;
    }
    for(i=1,j=0;i<=n;i++)
    {if(a[i-1]==1) t[j]++;else j++;
    }
    for(i=1,r=t[0];i<=n-1;i++)
    r=m(r,t[i]);
    printf("%d",r);

    return 0;
}

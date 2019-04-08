
void main()
{
    int a[100000],b[100000];
    int i,j,k,n,m=0;
    int r,t,p=0;
    scanf("%d",&n);
    scanf("%d %d",&a[m],&b[m]);
    while(a[m]!=0||b[m]!=0)
    {  m++;
       scanf("%d %d",&a[m],&b[m]);
    }
    for(k=0;k<n;k++)
    {
       r=0;t=0;
       for(j=0;j<m;j++)
          if(a[j]==k) {r=1;break;}
       if(r==1) continue;
       for(j=0;j<m;j++)
          if(b[j]==k) t++;
       if(t==n-1)
       {printf("%d\n",k);p=1;}
    }
    if(p==0) printf("NOT FOUND\n");    
}



int main()
{
    int m[1000],n[1000],i,j,k,s=0,d,w[1000],c,g,f,v,e;
   for(k=0;;k++)
{
    scanf("%d %d",&n[k],&m[k]);
   c=n[k]+1;
    int a[c];
    for(i=0;i<=n[k];i++)
    a[i]=1;
    j=0;i=n[k]-1;v=0;
    while(v<n[k]-1)
    {if(j==m[k])
     {
          a[i]=0;
          j=0;
          v++; 
             
     }
     else 
     {     i++;
     if(i==n[k])
      i=i-n[k];
      j=j+a[i];
      }
     
     
     }
     for(i=0;i<n[k];i++)
     if(a[i]==1)
     w[k]=i+1;
      g = n[k];
      f = m[k];
      if(g==0&&f==0)
      {e=k;
      break;} 
}
      for(k=0;k<e;k++)
     printf("%d\n",w[k]);
    getchar();
     getchar();
}

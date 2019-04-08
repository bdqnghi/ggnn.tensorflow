int main()
{
      int n,i,j,t,m,x,k;
      char a[100][100],b[100],c[100],d[100][100],e[100],f[100][100],s[100];
      scanf("%d",&n);
      for(i=0;i<n;i++)
      scanf("%s %d",a[i],&b[i]);
      k=0;
      for(i=0;i<n;i++)
      {
                      if(b[i]>=60)
                      {c[k]=b[i];strcpy(d[k],a[i]);k++;}
                      }
      for(i=0;i<k-1;i++)
      {
                      for(j=0;j<k-1-i;j++)
                      {
                                          if(c[j]<c[j+1]){t=c[j];c[j]=c[j+1];c[j+1]=t;strcpy(s,d[j]);strcpy(d[j],d[j+1]);strcpy(d[j+1],s);}
                                          }
                      }
      for(i=0;i<k;i++)
      printf("%s\n",d[i]);
      m=0;
      for(i=0;i<n;i++)
      {
                      if(b[i]<60){e[m]=b[i];strcpy(f[m],a[i]);m++;}
                        }
      for(i=0;i<m;i++)
      printf("%s\n",f[i]);
      }

int main()
{
      char a[100],b[100];
      int c[100],d[100],i,j,k,l,n;
      scanf("%d",&n);
      for(l=0;l<n;l++)
      {
                      scanf("%s\n",a);
                      scanf("%s",b);
                      memset(c,0,sizeof(c));
                      memset(d,0,sizeof(d));
                      int n1=strlen(a);
                      j=0;
                      for(i=n1-1;i>=0;i--)  c[j++]=a[i]-'0';
                      int n2=strlen(b);
                      j=0;
                      for(i=n2-1;i>=0;i--)  d[j++]=b[i]-'0';
                      for(i=0;i<100;i++)
                      {
                                        c[i]=c[i]-d[i];
                                        if(c[i]<0)
                                        {
                                                  c[i]=c[i]+10;
                                                  c[i+1]--;
                                        }
                      }
                      k=99;
                      while(c[k]==0&&k>0) k--;
                      for(i=k;i>=0;i--) printf("%d",c[i]);
                      printf("\n");
      }
      return 0;
}

int main()
{
    int x,y,i,j,n=1,m=1,a[15],b[15],p=0;
    cin>>x>>y;//????
    a[0]=x;b[0]=y;
    for(i=1;a[i-1]!=1;i++) {a[i]=a[i-1]/2;n++;}//???????
     for(i=1;b[i-1]!=1;i++) {b[i]=b[i-1]/2;m++;}
     if(x>=y)//??????????????
     {
         for(j=0;j<m;j++)
          {for(i=0;i<n;i++)
          {
              if(a[i]==b[j]) {cout<<a[i];p=1; break;}
          }
           if(p) break;
          }
     }
     else { for(i=0;i<n;i++)
          {for(j=0;j<m;j++)
          {
              if(a[i]==b[j]) {cout<<a[i];p=1; break;}
          }
           if(p) break;
          }
          }
          return 0;
}

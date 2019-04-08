
int main()
{
    int n;           //??n
    cin>>n;          //??n
    float a[100],b[100],c[100],s[100],t;       //??????a,b,c,???????????t
    int i,l,m,p=0,j,k,q,x,d[100],e[100];       //???????????d,e
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];               //????
    }
    for(l=0;l<n-1;l++)
    {
         for(m=l+1;m<n;m++)
         {
             s[p]=sqrt((a[l]-a[m])*(a[l]-a[m])+(b[l]-b[m])*(b[l]-b[m])+(c[l]-c[m])*(c[l]-c[m]));         //????
             d[p]=l;                          //???????????
             e[p]=m;
             p++;
         }
    }
    for(j=0;j<p-1;j++)
    {
        for(k=j+1;k<p;k++)
        {
            if(s[k]>s[j])              //????????
            {
               t=s[k];
               s[k]=s[j];
               s[j]=t;
               q=d[k];
               d[k]=d[j];             //???????
               d[j]=q;
               q=e[k];
               e[k]=e[j];
               e[j]=q;
            }
            if(s[k]==s[j])
            {
                if(d[j]>d[k]||e[j]>e[k])       //??????????????????
                  {
                      q=d[k];
                      d[k]=d[j];
                      d[j]=q;
                      q=e[k];
                      e[k]=e[j];
                      e[j]=q;
                 }
           }
       }
    }
    for(x=0;x<p;x++)
    {
        cout<<"("<<a[d[x]]<<","<<b[d[x]]<<","<<c[d[x]]<<")-("<<a[e[x]]<<","<<b[e[x]]<<","<<c[e[x]]<<")=";
        printf("%.2f\n",s[x]);                     //??
    }
    return 0;
}

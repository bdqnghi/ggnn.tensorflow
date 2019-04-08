int main()
{
    int i,m,ma1,a1,b1,n=0;//????
    char a[251],b[251],c[252];
    cin.getline(a,250);//????
    cin.getline(b,250);
    a1=strlen(a);//??????
    b1=strlen(b);
    if(a1>=b1)//?0
    {
        m=a1;
       for(i=b1-1;i>=0;i--) b[i+a1-b1]=b[i];
       for(i=0;i<a1-b1;i++) b[i]='0';
    }
    else
    {
        m=b1;
      for(i=a1-1;i>=0;i--) a[i+b1-a1]=a[i];
      for(i=0;i<b1-a1;i++) a[i]='0';
    }
    for(i=m-1;i>=0;i--)//??????
    {
        if((a[i]+b[i]-96+n)<10) { c[i+1]=a[i]+b[i]-48+n;n=0;}
        else { c[i+1]=a[i]+b[i]-48-10+n;n=1;}

    }
    if(n==1) //????
        {
        c[0]='1';
        for(i=0;i<=m;i++) cout<<c[i];
        }
        else
        {
            int j=1,q=1,p=0,k;
            for(k=1;k<=m;k++) {if(c[k]!='0') {p=1;break;}}
            if(p){
            while(c[j]=='0') {q++;j++;}
            for(i=q;i<=m;i++) cout<<c[i];
            }
            else cout<<'0';
        }
    return 0;
}

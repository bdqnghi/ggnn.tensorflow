int main()
{
    int z,q,s,l,o=0;
    for(z=10;z<=50&&o<1;z=z+10)
    for(q=10;q<=50&&o<1;q=q+10)
    for(s=10;s<=50&&o<1;s=s+10)
    for(l=10;l<=50&&o<1;l=l+10)
    {
                          if(z+q==s+l&&z+l>s+q&&z+s<q)
                          {o=1;}
                          }
    z=z-10;q=q-10;s=s-10;l=l-10;
    int a[5];
    char w[5];
    a[1]=z,w[1]='z';
    a[2]=q,w[2]='q';
    a[3]=s,w[3]='s';
    a[4]=l,w[4]='l';
    int i,j,x;
    char y;
    for(i=1;i<=3;i++)
    for(j=1;j<=4-i;j++)
    {if (a[j]>a[j+1])
    {x=a[j+1];a[j+1]=a[j];a[j]=x;
    y=w[j+1];w[j+1]=w[j];w[j]=y;}}
    int n;
    for(n=4;n>=1;n--)
    {cout<<w[n]<<" "<<a[n]<<endl;}
    return 0;
}

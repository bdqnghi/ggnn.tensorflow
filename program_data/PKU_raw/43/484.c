int main()
{
    int m,i,o,k,l;
    cin>>m;
    for(i=2;i<=(m/2);i++)
    {
       o=m-i;
       for(k=2;k<i;k++)
       {
          if (i%k==0) goto end;
          }
       for(l=2;l<o;l++)
       {
          if (o%l==0) goto end;
          }
       cout<<i<<" "<<o<<endl;
       end: continue;
       }
       return 0;
}

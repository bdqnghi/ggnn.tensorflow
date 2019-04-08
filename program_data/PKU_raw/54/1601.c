int main()

{
    int n,k,i,j,c,a,m=0;
    cin>>n>>k;
     for(j=1;;j++)
     {c=j;
      for(i=1;i<=n;i++)
       {a=(c*n)+k;
        if(i!=n)
         {if(a%(n-1)==0) c=a/(n-1);
           else break;}
             else m=a;}
         if(m!=0) {cout<<m<<endl;break;}}
    
return 0;
}
                       

int main()
{
    int a[100],b[100];
    int i,j,m;
    cin>>j;
     for(i=1;i<=j;i++){
       cin>>a[i];
     }
    for(i=1;i<=j;i++){                 
    m=j+1-i;
    b[m]=a[i];
    }
    for(m=1;m<=j-1;m++){
      cout<<b[m]<<" ";
    }
    cout<<b[j];
    return 0;
}

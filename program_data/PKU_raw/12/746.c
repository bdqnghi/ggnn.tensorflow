int main()
{
    int a[16],i,j,k;
while(1)
    { 
   int s=0;
   for(i=0;;i++)
   { 
    cin>>a[i];
    if(a[i]==0)break;
    if(a[i]==-1)goto end;
   }
   for(j=0;j<=i-1;j++)
    for(k=0;k<=i-1;k++)
     if(a[j]%a[k]==0&&a[j]/a[k]==2) s++;
     cout<<s<<endl;
}
end:
return 0;
}

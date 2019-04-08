int main()
{
    char a[1100]={'\0'};
    int i,j,max;
    cin>>a;
    for(i=0;i<strlen(a);i++)
       if(a[i]>='a'&&a[i]<='z')
          a[i]=a[i]-32;
    for(i=0;i<strlen(a);i++)
    {
       for(j=0;j<strlen(a)-i;j++)
       {
          if(a[i]==a[i+j])
             max=j+1; 
          else break;                         
       }
       cout<<"("<<a[i]<<','<<max<<")";
       i=i+max-1; 
    }
    return 0;
}

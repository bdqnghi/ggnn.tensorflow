int main()
{
    char a[40]={0};
    int b[40]={0};
    int i,j,k;
    a[0]='1';
    int n;
    cin>>n;
    for(i=0;i<n;i++)
    {
                    for(j=0;j<40;j++)
                    {
                                     if(a[j]==0)
                                     break;
                                     b[j]=(a[j]-'0')*2;
                    }
                    for(k=j-1;k>0;k--)
                    {
                                    if(b[k]>=10)
                                    {b[k]=b[k]-10;
                                    b[k-1]=b[k-1]+1;}
                    }
                    if(b[0]<10)
                    for(k=0;k<j;k++)
                    a[k]=b[k]+'0';
                    else
                    {a[0]='1';a[1]=b[0]-10+'0';
                    for(k=1;k<j;k++)
                    a[k+1]=b[k]+'0';}
    }
cout<<a;
return 0;

}

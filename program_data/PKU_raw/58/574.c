int main()
{
    int n=0,i=0,g=0,h=1,l=0,k=0;
    cin>>n;
    cin.get();
    char a[1000][88];
    for(i=1;i<=n;i++)
    {
       cin.getline(a[i],86,'\n');
       if(((a[i][0]>='a')&&(a[i][0]<='z'))||((a[i][0]>='A')&&(a[i][0]<='Z'))||(a[i][0]=='_'))
       g=1;
       l=strlen(a[i]);
       for(k=1;k<l;k++)
       {
          if(!(((a[i][k]>='a')&&(a[i][k]<='z'))||((a[i][k]>='A')&&(a[i][k]<='Z'))||((a[i][k]>='0')&&(a[i][k]<='9'))||(a[i][k]=='_')))
          {
             h=0;
             break;
          }
       }
       if((g==1)&&(h==1))
       cout<<"1"<<endl;
       else
       cout<<"0"<<endl;
       h=1;
       g=0;
    }
    return 0;
}
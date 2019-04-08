int main()
{    
     int n,m,x=0,sum=0,i;
     cin>>n;
     char a[110],b[110];
     cin>>a;
     cin>>m;
     for (i=0;i<strlen(a);i++)
     {
     if (a[i]>='0'&&a[i]<='9')
     x=a[i]-'0';
     if (a[i]>='A'&&a[i]<='Z')
     x=10+a[i]-'A';
     if(a[i]>='a'&&a[i]<='z')
     x=10+a[i]-'a'; 
     sum=sum*n+x;}
     i=0;
     do 
     {
     b[i]=sum%m;
     if (b[i]>=10)
     b[i]=b[i]-10+'A';
     else b[i] += '0';
     sum=sum/m;
     i++;
     }while(sum>0);
     for (int k=i-1;k>=0;k--)
     cout<<b[k];
     return 0;
}

char a[100000][50];
int main()
{int n=0;
cin>>n;
for (int i=1;i<=n;i++)scanf("%s", a[i]);
int s=0;

for (int i=1;i<=n;i++)
 {
      
      if (s+strlen(a[i])<=80)
       {
        if (s+strlen(a[i])+strlen(a[i+1])+1<=80){cout<<a[i];if (i!=n)cout<<' ';s+=strlen(a[i]);s++;}
        else if (s+strlen(a[i])+strlen(a[i+1])+1>80){cout<<a[i]<<endl;s=0;}
       }
      else if (s+strlen(a[i])>80)
      {cout<<endl<<a[i]<<' ';s=strlen(a[i]);s++;}
    
   
 }
return 0;
}

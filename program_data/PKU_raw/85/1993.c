int main ()
{
int n,x;
cin >> n;
for(int i=0 ;i<n;i++)
{
x=0;
char a[22];
cin>>a;
for(int j=0;a[j]!='\0';j++)
{
if(j==0) {if((a[j]>64&&a[j]<91)||(a[j]>96&&a[j]<123)||a[j]=='_') continue;}
else if((a[j]>64&&a[j]<91)||(a[j]>96&&a[j]<123)||a[j]=='_'||(a[j]>47&&a[j]<58)) continue;
x=1;
}
if(x==0) cout<<"yes"<<endl;
else cout<<"no"<<endl;
}
return 0;
}
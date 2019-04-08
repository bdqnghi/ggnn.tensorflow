int main()
{int i,n,k;
char a[100];
cin.getline(a,100);
n=strlen(a);
int b[n];
for(i=0;i<n;i++)
b[i]=a[i]-48;
if(n==1)
cout<<0<<endl<<b[0];
else if(n==2&&(b[0]*10+b[1]<13))
{cout<<0<<endl<<b[0]<<b[1];}
else {for(i=0;i<n-1;i++)
{k=(b[i]*10+b[i+1])/13;
if(!((k==0)&&(i==0)))
cout<<k;
b[i+1]=b[i]*10+b[i+1]-13*k;}
cout<<endl<<b[n-1];}
return 0;
}
int main()
{int a[3]={3,5,7},b,m=0,c[3],j=0,i;
cin>>b;
for(i=0;i<3;i++)
{if(b%a[i]==0)
{m=m+1;
c[j]=a[i];j=j+1;}}
if(m==0)
cout<<"n";
else if(m==1)
cout<<c[0];
else
{for(j=0;j<m-1;j++)
{cout<<c[j]<<" ";}
cout<<c[m-1];}
return 0;
}


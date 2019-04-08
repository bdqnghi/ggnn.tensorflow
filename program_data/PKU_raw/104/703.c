int main()
{int a[100],b[100],i,m,n; //?????????
cin>>a[1]>>b[1]; //?????
for(i=1;;i++)
{if(a[i]%2==0) a[i+1]=a[i]/2;
 else a[i+1]=(a[i]-1)/2;

 if(a[i+1]==1) break; //?????????

}
 m=i+1;

for(i=1;;i++)
{if(b[i]%2==0) b[i+1]=b[i]/2; //??????
 else b[i+1]=(b[i]-1)/2;

  if(b[i+1]==1) break;
}
  n=i+1;

for(i=1;i<=(m>n?n:m);i++)
{if(a[m-i]!=b[n-i]) cout<<a[m-i+1]; //?????????? ?????
 if(a[m-i]!=b[n-i]) break;

}

return 0;
}
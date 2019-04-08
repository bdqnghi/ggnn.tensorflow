int main()
{int n=0,i=0,k=0,j=0;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{cin>>a[i];
}
for(i=0;i<n;i++)
{if(a[i]%2!=0)
a[k++]=a[i];
}
for(i=0;i<k;i++)
{for(j=i;j<k;j++)
{if(a[i]>a[j]) 
{n=a[i];
a[i]=a[j];
a[j]=n;
}
}
}
for(i=0;i<k;i++)
{cout<<a[i];
if(i!=k-1) cout<<",";
}
return 0;
}
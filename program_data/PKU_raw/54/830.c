int main()
{
int m,n,k;
int M,i,brk=0;
cin>>n>>k;
for(M=n+k;;M+=n)
{m=M;
for(i=0;i<n;i++)
{if(m%n!=k)
{brk=1;break;}
m=m-k-m/n;
}
if(!brk&&m>0)
break;
brk=0;
}
cout<<M;
return 0;
}
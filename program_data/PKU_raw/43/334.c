int main()
{
int num,p,q;
int i,j;
cin>>num;
for(p=3;p<=(num/2);p=p+2)
{for(i=2;i<p;i++)
{if(p%i==0)
{break;}
if(i==p-1)
{q=num-p;
for(j=2;j<q;j++)
{if(q%j==0)
{break;}
if(j==q-1)
{cout<<p<<" "<<q<<endl;}
}
}
}
}
return 0;
}
int F(int m)
{ 
if(m==1||m==2) return 1;
else 
{return F(m-1)+F(m-2);}
}

int main()
{int Z,a[23],i;
cin>>Z;
for(i=1;i<=Z;i++)
{cin>>a[i]; 
}
for(i=1;i<=Z;i++)
{cout<<F(a[i])<<endl;
                 }
 
 return 0;
}

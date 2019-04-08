int function(int num,int k)
{
int j;
int m=0;
if(num>1)
{for(j=k;j<=num;j++)
{if(num%j==0)
{m=m+function(num/j,j);}

}
return m;
}
else
return 1;
}
int main()
{int i,j;
int n;
cin>>n;
int num[100];

for(i=0;i<n;i++)
{cin>>num[i];}

for(i=0;i<n;i++)
{cout<<function(num[i],2)<<endl;
}

return 0;
}
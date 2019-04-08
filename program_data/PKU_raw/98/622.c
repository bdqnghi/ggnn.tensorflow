int main()
{int n;
cin>>n;
int t=0;
char a[80];
int i,j;
cin>>a;
t=strlen(a)+1;
cout<<a;
for(i=1;i<n;i++)
{cin>>a;
if(t+strlen(a)<=80)
{cout<<' '<<a;
t=t+strlen(a)+1;
}
else
{cout<<endl<<a;
t=strlen(a)+1; 
}
}


return 0;

}



int  main()

{

int n, m, i, s=0,a=1;
while(1)
{

cin>>n>>m;
if((n+m)==0)
    break;
if(n>=2)

{for (i=2; i<=n; i++)
    s=(s+m)%i;


cout<<s+1<<endl;
s=0;
}
if (n==1)
cout<<a<<endl;


}
return 0;
}


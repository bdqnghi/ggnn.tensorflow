int main()
{
int n,i=0;
cin>>n;
if(n%3==0)
{
cout<<"3";
i++;
}

if(n%5==0&&i>0)
{
cout<<" 5";
i++;
}
else if(n%5==0)
{
cout<<"5";
i++;
}
if(n%7==0&&i>0)
{
cout<<" 7";
i++;
}
else if(n%7==0)
{
cout<<"7";
i++;
}

if(i==0)
cout<<"n";
return 0;

}

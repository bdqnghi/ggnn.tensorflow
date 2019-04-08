int kuai(int x,int y);
int main()
{
    int a,b;
    cin>>a>>b;
    kuai(a,b);
    return 0;
}

int kuai(int x,int y)
{
    if(x==y)
    cout<<x<<endl;
    if(x<y)
    kuai(x,y/2);
    if(x>y)
    kuai(x/2,y);
    return x;
}

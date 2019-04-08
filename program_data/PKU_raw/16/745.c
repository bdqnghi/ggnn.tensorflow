void p( int num )
{
while( num )
{
cout<<num%10;
num /= 10;
}
}
int main()
{
int l;
cin>>l;
if(l!=0)
p( l );
else
cout<<0;
return 0;
}
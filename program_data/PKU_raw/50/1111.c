int main()
{
int n,d[12]={31,28,31,30,31,30,31,31,30,31,30,31},i,j=2;
cin>>n;
if((n+13)%7==6)
 cout<<1<<endl;
for(i=0;i<12;i++)
{n+=d[i]%7; 
if((n%7+5)%7==5&&j<13)
   cout<<j<<endl;
j++;                 
} 
 
return 0; 
}

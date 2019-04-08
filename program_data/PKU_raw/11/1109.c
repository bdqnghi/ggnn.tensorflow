int main()
{
 int year,mon,day;
 cin>>year>>mon>>day;
int days=0;
 int ar[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 int br[12]={31,29,31,30,31,30,31,31,30,31,30,31};
 if(year%4==0&&year%100!=0||year%400==0)
 {
 for(int i=0;i<mon-1;i++)
 days+=br[i];
}
else
{
 for(int i=0;i<mon-1;i++)
 days+=ar[i];
}
days+=day;
cout<<days<<endl;
return 0;
}
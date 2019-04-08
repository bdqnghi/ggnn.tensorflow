int main()
{
int k;
cin>>k;
int b[k];
for(int i=0;i<k;i++)
{int a;
cin>>b[i];
double n;
n=b[i];
a=sqrt(5);
a=((pow(((1+sqrt(5))/2),n)-(pow(((1-sqrt(5))/2),n)))/sqrt(5));
cout<<a<<endl;
}
return 0;
}
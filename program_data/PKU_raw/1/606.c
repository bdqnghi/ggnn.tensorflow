int c;
void cal(int n,int k);
int main(int argc)
{  int m,n,j;
   cin>>m;
   for (j=1;j<=m;j++)
   { cin>>n;
    c=0;
	cal(n,1);
   cout<<c<<endl;}

	return 0;

}
void cal(int n,int k)
{  if (n==1)
{c++;
return;}
int i;
for (i=2;i<=n;i++)
{ if (n%i==0&&i>=k)
{cal(n/i,i);}}
}
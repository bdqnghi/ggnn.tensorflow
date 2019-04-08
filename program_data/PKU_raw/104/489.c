int tree (int,int);               // ??????
int power (int,int);              // ??????
int main ()
{
 int x,y;
 cin >> x >> y;
 cout << tree (x,y) << endl;
 return 0;
}
int tree (int a, int b)
{
 int i,c;
 for (i=0;i<11;i++)
 {
  c=a/power(2,i);
  if (b==c)
   return b;
 }
 for (i=0;i<11;i++)
 {
  c=b/power(2,i);
  if (a==c)
   return a;
 }
 if (a==1||b==1)
  return 1;
 return tree (a/2,b/2);
}
int power (int m,int n)
{
 int j,sum=1;
 for (j=0;j<n;j++)
  sum=sum*m;
 return sum;
}





int main()
{
int n, y, m1, m2, d = 0, r, c;
int a[12] = {31, 28, 31, 30, 31, 30 ,31, 31, 30, 31, 30, 31};//a,b???????????
int b[12] = {31, 29, 31, 30, 31, 30 ,31, 31, 30, 31, 30, 31};
cin >> n;
for (int i = 1; i <= n; i++)
{
cin >> y >> m1 >> m2;
r = 0;
if (y % 4 == 0) r = 1;
if (y % 100 == 0) r = 0;
if (y % 400 == 0) r = 1;//????r=1????
//m1,m2??????????
if (m1 > m2)
{
c = m1;
m1 = m2;
m2 = c;
}
if (r == 0)//???
{
for (int i = m1; i < m2; i++)
{
d = d + a[i - 1];
}//??????
if (d % 7 == 0) cout << "YES" << endl;
else cout << "NO" << endl;//???????YES??NO
}
if (r == 1)//????
{
for (int i = m1; i < m2; i++)
{
d = d + b[i - 1];
}
if (d % 7 == 0) cout << "YES" << endl;
else cout << "NO" << endl;
}
d = 0;//????
}
return 0;
}


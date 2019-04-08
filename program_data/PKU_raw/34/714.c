/*
  *@ title:????
  *@ date:2010-12-3
  *@ author:1000012899 ???
  *@ description: ???????
*/
void jg(int);
int main()
{
    int n;
    cin >> n;
    if (n == 1) cout <<"End";
    else jg(n);
    return 0;
}
void jg(int m)
{
    if (m % 2 == 1) 
    {
        cout << m << "*3+1=" ;
        m = m * 3 + 1;
        cout << m << endl;
    }
    else 
    {
        cout << m << "/2=" ;
        m = m / 2;
        cout << m << endl;
    }
    if (m == 1) 
    {
        cout <<"End";
        return;
    }
    else jg(m);
} 
    




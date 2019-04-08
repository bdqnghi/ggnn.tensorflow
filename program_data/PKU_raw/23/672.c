int main()
{
  char ch[50][100];
  int n = 0;
  for (cin >> ch[n]; ch[n][0] != '\n' && ch[n][0] != '\0';)
  {
    n++;
    cin >> ch[n];
  }
  
  for (n--; n >= 0; n--)
  {
    cout << ch[n];
    if (n > 0) cout << ' ';
  }
  return 0;
}

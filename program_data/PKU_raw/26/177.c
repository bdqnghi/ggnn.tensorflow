int main()
{
 char str[100];
 while (cin.getline(str, 101, '\n'))
 {
  if (str[0] == '\n')
   continue;
  int slen = strlen(str);
  for (char *p = str; p != &str[slen]; p++)
  {
   if (*p == ' ')
   {
    if (*(p + 1) != ' ')
     cout << ' ';
   }
   else
    cout << *p;
  }
  cout << endl;
 }
 return 0;
}
 
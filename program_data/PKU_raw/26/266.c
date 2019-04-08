int main()
{char a[101];
 char *p;
 cin.getline(a,101);
 p=a;
 while(*p!='\0')
 {if(*p!=' '||*p==' '&&*(p+1)!=' ')
  cout<<*p;
  p++;
 }
 return 0;
}
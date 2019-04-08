int main( )
{ int a[500];
  int n,b,i,length=0;      //length???????
  cin >> n;
  for (i=0; i<n; i++)
  { cin >> b;
    if (b%2 == 1)          //???????????
    { a[length] = b;
      length++;
    }
  }
  sort(a,a+length);        //??
  cout << a[0];
  if (length>1)
  { for (i=1; i<length; i++)
    cout << ',' << a[i];
  }
  cout << endl;
  return 0;
}
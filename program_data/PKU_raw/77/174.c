
char children[101];
char boy;

int f(int i) {
  if (children[i]==boy) {
    int girlPos = f(i+1);
    cout << i << ' ' << girlPos << endl;
    if (i != 0)
      return f(girlPos+1);
    else
      return 0;
  }
  return i;
}

int main() {
  cin >> children;
  boy = children[0];
  f(0);

  return 0;
}

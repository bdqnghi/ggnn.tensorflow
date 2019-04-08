int main() {
int n;
int a = 0, b = 0, c = 0;
cin >> n;
if (n % 3 == 0) { a = 1; cout << 3;}
if (n % 5 == 0) { b = 1; if (a) { cout << " ";} cout << 5;}
if (n % 7 == 0) { c = 1; if (a+b) { cout << " ";} cout << 7;}
if (a + b + c == 0) {cout << "n";}
cout << endl;
return 0;
}
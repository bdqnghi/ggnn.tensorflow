int main() {
int n;
double y[500] = {0}, a, b;
cin >> n;
cin >> a >> b;
y[0] = b / a;
for (int i = 1; i < n; i++) {
cin >> a >> b;
y[i] = b / a;
if (y[i] - y[0] > 0.05) { cout << "better";}
else if (y[0] - y[i] > 0.05) { cout << "worse";}
else { cout << "same";}
cout << endl;
}
return 0;
}
const int MAX_NUM = 300;
int anLoop[MAX_NUM + 10];
int main()
{
int n,m;
while (1) {
scanf("%d %d",&n,&m);
if (n==0) break;
for (int i=0; i<n; i++) anLoop[i] = i + 1;
int nPtr = 0;

for (int i=0; i<n; i++) {
int nCounted = 0;
while (nCounted < m) {
while (anLoop[nPtr] == 0) nPtr = (nPtr + 1) % n;
nCounted++;
nPtr = (nPtr + 1) % n;
}
nPtr--;
if (nPtr < 0) nPtr = n - 1;
if (i == n-1)
cout << anLoop[nPtr] << endl;
anLoop[nPtr] = 0;
}
}
}
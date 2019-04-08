int main()
{
int a[100][100];
int m, n, i, j, k;
scanf("%d %d", &m, &n);
 
 
 
for (i = 0; i < m; i++) {
for (j = 0; j < n; j++) {
scanf("%d", &a[i][j]);
}
}
for (k=0; k<n; k++) {
for (i=0, j=k; i<m && j>=0; i++, j--) {
printf("%d\n", a[i][j]);
}
}
for (k=1; k<m; k++) {
for (i=k, j=n-1; i<m && j>=0; i++, j--) {
printf("%d\n", a[i][j]);
}
}
return 0;
}
 
int main_e4_6_for()
{
int a[100][100];
int m, n, i, j, k;
scanf("%d %d", &m, &n);
for (i = 0; i < m; i++) {
for (j = 0; j < n; j++) {
scanf("%d", &a[i][j]);
}
}
for (k=0; k<(m+n-1); k++) {
for (i=e46max(0, k-n+1), j=e46min(k, n-1); i<m && j>=0; i++, j--) {
printf("%d\n", a[i][j]);
}
}
return 0;
}
 
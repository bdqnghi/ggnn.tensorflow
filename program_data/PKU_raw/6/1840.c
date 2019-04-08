
int main(){
int k;
scanf("%d", &k);
while(k--){
int m, n;
int data[100][100];
scanf("%d %d", &m, &n);
int i, j;
for(i=0;i<m;i++)
for(j=0;j<n;j++)
    scanf("%d", &data[i][j]);
int sum = 0;
for(i=0; i<m; i++)
    sum = sum + data[i][0] + data[i][n-1];
for(i=1; i<n-1; i++)
    sum = sum + data[0][i] + data[m-1][i];
printf("%d\n", sum);
}
}
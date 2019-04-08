
int n, m;
int a[maxn][maxn], b[maxn][maxn];
int ans = 0;

void checkline(int p, int n) {
  int tmin = infinity;
  for(int j = 0; j < n; j++)
    if (a[p][j] < tmin) tmin = a[p][j];
  for(int j = 0; j < n; j++)
    a[p][j] -= tmin;     
}

void checkcol(int p, int n) {
  int tmin = infinity;
  for(int i = 0; i < n; i++)
    if (a[i][p] < tmin) tmin = a[i][p];
  for(int i = 0; i < n; i++)
    a[i][p] -= tmin;      
}
     

int main() {
    
//  freopen("input.txt", "rt", stdin);
//  freopen("output.txt", "wt", stdout);
    
  scanf("%d", &n);
  int tn = n;
  
  for(int ctn = 0; ctn < tn; ctn++) {
  
    ans = 0;
    n = tn;
  
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
      scanf("%d", &a[i][j]);
  
  ans = 0;
      
  while (n >= 2) {
    for(int i = 0; i < n; i++) checkline(i, n);
    for(int i = 0; i < n; i++) checkcol(i, n);
    ans += a[1][1];
  //  printf("a[1][1] = %d\n", a[1][1]);
    for(int i = 0; i < n; i++)
      for(int j = 1; j < n-1; j++)  a[i][j] = a[i][j+1];
    for(int j = 0; j < n; j++)
      for(int i = 1; i < n-1; i++)  a[i][j] = a[i+1][j];
    n --;      
  }
  
  //puts("=======================");
  
  printf("%d\n", ans);
  
  }    
  
  return 0;
    
}

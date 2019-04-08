int n, ans;
int f[1000];
int a[1000];
int main(){
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++){
        f[i] = 1;
        for (int j = 0; j < i; j++){
            if (a[j] >= a[i] && f[j]+1 > f[i])
               f[i] = f[j]+1;               
        }
        ans = ans > f[i]?ans:f[i];
    }
    cout << ans << endl;
    
}

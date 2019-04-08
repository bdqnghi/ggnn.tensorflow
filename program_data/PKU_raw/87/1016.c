int main(){
    int n[10];
    int i, count = 0;
    for (i = 0; i < 6; ++ i)
    {
        scanf("%d", &n[i]);
        count += n[i];
    }
    while (count > 0)
    {
          n[3]+= 12;
          
          if (n[5] < n[2]){
             n[5] += 60;
             -- n[4];
          }
          if (n[4] < n[1]){
             n[4] += 60;
             -- n[3];
          }
          long long ans = (n[5] - n[2]) + 60 * (n[4] - n[1]) + 3600 * (n[3] -n[0]);
          printf ("%lld\n", ans);
          count = 0;
          for (i = 0; i < 6; ++ i)
          {
              scanf("%d", &n[i]);
              count += n[i];
          }
    }
    return 0;
}

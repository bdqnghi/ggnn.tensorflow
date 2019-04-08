int main()
{
  int i, n, sum;
  scanf("%d", &n);
  sum = 0;
  for(i = 1; i <= n; i++){
  if(i % 7 == 0 || (i % 10 != 0) && (i % 10) % 7 == 0 || (i >= 11) && (int)(i / 10) % 7 == 0)
     continue;
  else
      sum += i*i;
    }
printf("%d", sum);
return 0;
}
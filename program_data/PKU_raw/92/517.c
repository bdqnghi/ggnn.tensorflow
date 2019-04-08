const int MAX = 1005;
int main(void)
{
 int n;
 int tian[MAX], king[MAX];
 while(scanf("%d", &n), n)
 {
  for(int i=0; i<n; i++)
   scanf("%d", &tian[i]);
  for(int i=0; i<n; i++)
   scanf("%d", &king[i]);
  sort(tian, tian+n);
  sort(king, king+n);

  int tian_fast = n-1, king_fast = n-1, result = 0;
  int tian_slow = 0, king_slow = 0;
  while(tian_slow <= tian_fast && king_slow <= king_fast)
  {
   if(tian[tian_slow] < king[king_slow])
   {
    king_fast--;
    tian_slow++;
    result--;
   }
   else if(tian[tian_slow] > king[king_slow])
   {
    tian_slow++;
    king_slow++;
    result++;
   }
   else
   {
    if(tian[tian_fast] > king[king_fast])
    {
     result++;
     tian_fast--; king_fast--;
    }
    else if(tian[tian_fast] < king[king_fast])
    {
     result--;
     tian_slow++;
     king_fast--;
    }
    else
    {
     if(tian[tian_slow] < king[king_fast])
     {
      result--;
      tian_slow++;
      king_fast--;
     }
     else
     {
      break;//??????
     }
    }
   }
  }
  printf("%d\n", result*200);
 }
 return 0;
}

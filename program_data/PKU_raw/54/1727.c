int p = 1, count1 = 1, sum = 0;
int main()
{
    int n, k, ans;
    int  min(int n, int k);
    cin >> n >> k;
	do { ans =  min(n, k);}
	while(ans < 0);
   cout << ans << endl;
   cin >> ans;
    return 0;
}

int  min(int n, int k)
{
     if(count1 == 1)
     {
               sum = n * p + k;
               count1++;
               return min(n, k);
     }
     else
     {
         if(count1 == n + 1)
         {
             // cout << sum << endl;
			  return sum;
         }
         else
         {
             if(sum % (n - 1) == 0)
             {
                    count1++;
                    sum = (sum * n) / (n - 1) + k;
                   return  min(n, k);
             }
             else
             {
                 count1 = 1;
                 p++;
				 return -1;
                // min(n, k);
             }
         }
     }
}
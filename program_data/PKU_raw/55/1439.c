int main()
{
   char x[100];
   int y[100];
   int i, n, m, sum = 0, j = 0;
   cin >> n >> x >> m;
   for (i = strlen(x) - 1; i >= 0; i --)
   {
	   if (x[i] <= '9')
		    sum = sum + (x[i] - '0') * pow(1.0 * n, 1.0 * strlen(x) - i - 1);
	   else if (x[i] >= 'A' && x[i] <= 'Z')
			sum = sum + (x[i] - 'A' + 10) * pow(1.0 * n, 1.0 * strlen(x) - i - 1);	  
	   else
	        sum = sum + (x[i] - 'a' + 10) * pow(1.0 * n, 1.0 * strlen(x) - i - 1);
   }
   if (sum == 0)
	   cout << 0 << endl;
   while (sum != 0)
   {
	   y[j ++] = sum % m;
	   sum = sum / m;
   }
   for (i = j - 1; i >= 0; i --)
   {
	   if (y[i] <= 9)
		   cout << y[i];
	   else
		   cout << (char) (y[i] - 10 + 'A');
   }
   cout << endl;
   return 0;
}

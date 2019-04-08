int main()
{
   int n, i, l, j, flag;
   char a[81];
   cin >> n;
   gets(a);
   for(i = 1; i <= n; i++)
   {
       flag = 1;
       gets(a);
       l = strlen(a);
       if(a[0] != '_' &&(a[0] < 'a' || a[0] > 'z') && (a[0] < 'A' || a[0] > 'Z'))
       {    
           flag = 0;
           cout << "0" << endl;
       }
       for (j = 1; j < l; j++)
		   if(a[j] != '_' &&(a[j] < 'a' || a[j] > 'z') && (a[j] < 'A' || a[j] > 'Z') && (a[j] < '0' || a[j] > '9'))
		   {    
             if (flag)
                cout << "0" << endl;
			 flag = 0;
			 break;
		   }
       if(flag)
          cout << "1" << endl;
     }
   return 0;
}
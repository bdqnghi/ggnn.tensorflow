int qi[1002];
int tian[1002];
int n;
int myCompare(const void*a,const void *b)
{
   int *p,*q;
   p = (int*)a;
   q = (int*)b;
   return *q - *p;
}
int main()
{
    while(1)
    {
      cin >> n;
      if(n==0)
         break;
      for(int i=0;i<n;i++)
         scanf("%d",&tian[i]);
      for(int i=0;i<n;i++)
         scanf("%d",&qi[i]);
      qsort(tian,n,sizeof(int),myCompare);
      qsort(qi,n,sizeof(int),myCompare);      
      int qif=0,qis=n-1;
      int tianf=0,tians=n-1;
      int wins=0,ping=0;
      while(tianf<=tians)
      {
         if(tian[tianf]<qi[qif])
         {
            qif++;
            tians--;
            continue;
         }
         else if(tian[tianf]>qi[qif])
         {
            tianf++;
            qif++;
            wins++;
         }
         else
         {
            if(tian[tians]>qi[qis])
            {
               tians--;
               qis--;
               wins++;
            }
            else
            {
               if(tian[tians]==qi[qif])
                  ping++;
               tians--;
               qif++;
            }
         }
      }
      cout << 200*wins - (n-wins-ping)*200 << endl;
    }
    return 0;
}

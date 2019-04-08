
int n;
int num1[1001];
int num2[1001];

int cmp(const void *a,const void *b)
{
return *(int*)b - *(int*)a; 
}

int main()
{
while(1)
{
   cin>>n;
   if(!n)
    break;
   memset(num1,0,sizeof(num1));
   memset(num2,0,sizeof(num2));
   for(int i = 0 ; i < n; i++)
    cin>>num1[i];
   for(int i = 0 ; i < n; i++)
    cin>>num2[i];
   qsort(num1,n,sizeof(num1[0]),cmp);
   qsort(num2,n,sizeof(num2[0]),cmp);
   int res = 0;
   int m;
   int head = 0;
   int ttail = n-1;
   int ktail = n-1;
   for(int i = 0; i < n; i++)
   {
    if(num1[head] > num2[i])
    { 
     res++;
     head++;
    }
    else if(num1[head] < num2[i])
    {
     ttail--;
     res--; 
    }
    else      //??????????????????????
    {
     for(int j = ttail,m = ktail ; j>=head;j--,m--)
     {
      if(num1[j] > num2[m])
      {
       res++;
       ttail--;
       ktail--; 
      }
      else
      {
       if(num1[j] < num2[i])
        res--;
       ttail = --j;
       ktail = m;
       break; 
      } 
     }
    }
    if(head > ttail)
      break; 
   }
   cout<<res*200<<endl; 
}

return 0; 
}
 
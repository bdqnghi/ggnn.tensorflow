
int a[1000];
int b[1000];
int n;

int cmp(const void* a,const void *b)
{
	return (*(int*)a)-(*(int*)b);
}

int main()
{
	int i,j;
	int end1,end2;
	int sum=0;
	scanf("%d",&n);
	while(n!=0)
	{
       for(i=0;i<n;i++)
	   	   scanf("%d",&a[i]); //????
	   for(i=0;i<n;i++)
		   scanf("%d",&b[i]); //????
	   qsort(a,n,sizeof(int),cmp);
	   qsort(b,n,sizeof(int),cmp);
	  
	   j=0;
   for(i=j=n-1,end1=end2=0;j>=end2&&i>=end1;j--)
   {
     if(a[i]>b[j])      //???????????????????
      {
       sum++;
       i--;
      }
     else if(a[i]<b[j]) //????????????????????????????????
      {
       sum--;end1++;
      }
     else               //??????????
      {
           if(a[end1]>b[end2])//?????????????????????
            {
             sum++;end1++;end2++; j++; 
            }
           else if(a[end1]<b[end2]) //?????????????????????
           {
             sum--;end1++;
           }
           else
           {
             if(a[end1]==b[j])
                {
                  end1++;
                }
             else
                {
                  sum--;end1++;
                }
           }
      } 
   }
   printf("%d\n",200*sum);
   sum=0;
   scanf("%d",&n);
	}
   return 0;
}

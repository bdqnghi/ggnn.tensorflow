int King[1000];
int TianJi[1000];

int Partition(int A[1000],int p,int q)
{
    int i,j;
    int x =A[p];
    int temp;
    i = p;
    for (j = p+1;j<=q;j++)
    {
        if(A[j] >= x)
        {
                i+=1;
                temp = A[j];
                A[j] = A[i];
                A[i] = temp;
         }
     }
     temp = A[i];
     A[i] = A[p];
     A[p] = temp;
     return i;
}
                
    
int QuikSort(int A[1000],int p,int r)//???? 
{
    int q;
    if (p<r)
    {
    q = Partition(A,p,r);
    QuikSort(A,p,q-1);
    QuikSort(A,q+1,r);
    }
    return 0;
} 

int score(int A[1000],int B[1000],int n)//A?B?????????????A??????????B????????? 
{ 
 int Money = 0;
 int i,j,k,m;
 i = 0; 
 m = 0;
             while( i+m != n-1)//????????????? 
            {  
               
               if(i==0 && m == 0)
               {
               j = 0;
               k = 0;
               }
              // printf("\n%d %d %d %d",i,m,j,k);
               if(A[j] > B[i])//???????????????????????? 
               {
               Money+=1;
               j++;
               i++;
               }
               else if(A[n-k-1] > B[n-m-1])//???????????????????????? 
               {
               Money+=1;
               k++;
               m++;
               }
               else//?????????????????? 
               {
                   if(A[n-k-1]<B[i])
                   Money-=1;
                   k++;
                   i++;
               }
            }
            if(A[j] > B[i])//????????????? 
               {
               Money+=1;
               }
               else if(A[j] < B[i])
               {
               Money-=1;
               }
            
 return Money;
}   
    
int main()
{
    int n ,i;
    int Money; 
    scanf("%d",&n);
    while(1)
    {
            Money = 0;
            for(i=0;i<n;i++)
            scanf("%d",&TianJi[i]);
            for(i=0;i<n;i++)
            scanf("%d",&King[i]);
            QuikSort(TianJi,0,n-1); 
           // for(i=0;i<n;i++)
            //printf("%d ",TianJi[i]);
            QuikSort(King,0,n-1);
          //  printf("%d \n",score(TianJi,King,n));
            Money = score(TianJi,King,n);
            printf("%d\n",Money*200);
            scanf("%d",&n);
            if(n == 0) break;
    }
}

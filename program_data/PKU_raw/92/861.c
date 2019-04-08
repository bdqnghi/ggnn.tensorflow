
void myrank(int *,int );

int kh[1000], th[1000];
 

 int main()
 {
     int N, i, j, k, mxt, mxk, w;
     while(scanf("%d", &N),N)
     {
         for(i = 0; i < N; i++)
             scanf("%d", &th[i]);
         myrank(th,N);
         for(i = 0; i < N; i++)
             scanf("%d", &kh[i]);
         myrank(kh,N);
         w = k = j = 0;
         mxk = mxt = N-1;
         for(i = 0; i < N; i++)
         {
             if(th[j] > kh[k])
                 w++, j++, k++;
             else if(th[mxt] > kh[mxk])
                 w++, mxt--, mxk--;
             else if(th[mxt] < kh[k])
                 w--, mxt--, k++;
             else;
         }
         printf("%d\n", 200*w);
     }
     return 0;
 }

 void myrank(int *sz,int n)
{
	int i,j,tem;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(*(sz+i)<*(sz+j)){
				tem=*(sz+i);
				*(sz+i)=*(sz+j);
				*(sz+j)=tem;
			}
		}
	}
}
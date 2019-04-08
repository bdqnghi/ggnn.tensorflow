int main()
{int N[300];scanf("%d",N);
int k=0;
for(;scanf(",%d",N+k+1);)k++;
if(k==0)printf("No");
else
{
int Fir=0;
for(int i=0;i<=k;i++)
{
if(Fir<N[i]) Fir=N[i];
}
int Sec=0;
for(int i=0;i<=k;i++)
{
if(Sec<=N[i]&&N[i]!=Fir) Sec=N[i];
}
if(Sec==0) printf("No");
else printf("%d",Sec);
}
}
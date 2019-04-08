int a[40000]={0};
void fun(int n,int j,int k){
     int i;
     for(i=j;i<=sqrt(n);i++){
                             if(n%i==0){
                                        j=i;
                                        a[k]++;
                                        fun(n/i,j,k);
                                        }
                             }
                             
     }
      
int main()
{
  int n;
  int m[40000]={0};
  int i;
  scanf("%d",&n);
  for(i=1;i<=n;i++){ scanf("%d",&m[i]);}  
  for(i=1;i<=n;i++){fun(m[i],2,i);}
  for(i=1;i<=n;i++){ printf("%d\n",a[i]+1);} 
 
	
  return 0;
}

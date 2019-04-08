int main(){
    int m,i=2,j=2,a,b,n,k,l;
    scanf("%d",&m);
    n=m/2;
    while(i<=n){
                k=2;
                l=2;
                while(k<=i){
                            if(i%k==0)
                            break;
                            else
                            k++;}
                if(k==i){
                         j=m-i;
                         while(l<=j){
                                     if(j%l==0)
                                     break;
                                     else
                                     l++;}
                         if(l==j)
                         printf("%d %d\n",i,j);
                         i++;
                         }
                else{
                     i++;
                     continue;
                     }
                }
    return 0;
}
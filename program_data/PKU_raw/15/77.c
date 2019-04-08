int main(){
  int n,i,j,num,l,k,p,q;
  scanf("%d",&n);
  int a1,b1,a2,b2;
  int square[chang][kuan];
  for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
     {
        scanf("%d",&square[i][j]);
       }
   }
  for(l=0;l<n;l++)
  {
     for(k=0;k<n;k++)
     {
        if(square[l][k]==0){
        a1=l;
        b1=k;
       }
       }
   }
  for(p=(n-1);p>=0;p--)
  {
     for(q=(n-1);q>=0;q--)
     {
        if(square[p][q]==0){
        a2=p;
        b2=q;
        }
       }
   }
   num=(a1-a2-1)*(b1-b2-1);
  printf("%d",num);
return 0;
}

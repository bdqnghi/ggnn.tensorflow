int main(){
int n,i,j,t,num,b[100],c[100][61]={0};
   scanf("%d",&n);
   for (i=0;i<n;i++)
   {
       scanf("%d",&b[i]);
       for (j=0;j<b[i];j++)
       {
        scanf("%d",&t);
        c[i][t-1]=1;
       } 
    }
   for (i=0;i<n;i++)
   {
   j=0;num=0;
   while (j<60)
   {
   j++;
   num ++;
   if (c[i][num]==1) 
   {
   j+=3;
   if (j>=60) num+=1;
   }
   }
  printf("%d\n",num);
 }
 return 0;
}
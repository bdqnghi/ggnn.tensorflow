int main()
{
   int i,j,k,temp;
   int an[MAX_NUM]; 
   scanf("%d",&i);
   for (j=0;j<i;j++){
    scanf("%d",&an[j]);
   }

   for (j=0;j<i-1;j++){
      for (k=j+1;k<=i;k++){
        if (an[j]<an[k]){
             temp=an[j];
             an[j]=an[k];
             an[k]=temp;  
		}
     }  
  }  

    for (j=0;j<=1;j++){
      printf("%d\n",an[j]);
      }
   /* scanf("%d",&i);
     for (j=0;j<i;j++)
    scanf("%d\n",&an[j]);*/
    return 0;
      
 }    

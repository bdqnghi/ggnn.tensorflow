int main()
{
	int o,n,m,array[5][5],i,j,temp[5];
    for(i=0;i<5;i++){ 
                      for(j=0;j<5;j++){
    scanf("%d",&array[i][j]);}
    }
    scanf("%d %d",&n,&m);
    if((n>=0&&n<=4)&&(m>=0&&m<=4)){
                               for(i=0;i<5;i++){
                                                temp[i]=array[n][i];
                                                array[n][i]=array[m][i];
                                                array[m][i]=temp[i];
                                                }
    for(i=0;i<5;i++){
                     for(j=0;j<5;j++){
                                      if(j==0){
                                               printf("%d",array[i][j]);
                                               }
                                      else if(j!=0&&j!=4){
                                           printf(" %d",array[i][j]);
                                           } 
                                      else{
                                           printf(" %d\n",array[i][j]);
                                           } 
                                      }
                     } 
}
    else{
         printf("error"); }   
	scanf("%d",&o);
	return 0;
}


int main()
{
    int N;
    scanf("%d",&N);
    int input[500],deal[500];
    int k =0;
    for(int i =0;i<N;i++){
        scanf("%d",&input[i]);
           if(input[i]%2!=0)
             {
                 deal[k] = input[i];
                 k=k+1;
             }
        }
     int j,r;
     for(j=k-1;j>0;j--){
              for(r=0;r<j;r++){
                     if(deal[r]>deal[r+1])
                              {
                                     int t;
                                      t=deal[r+1];
                                     deal[r+1]=deal[r];
                                       deal[r]=t;
                                 }
                              }
                      }
for(int l = 0;l<k-1;l++){
    printf("%d,",deal[l]);
}
printf("%d",deal[k-1]);
return 0;
}



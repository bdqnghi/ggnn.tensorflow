void insertsort(int* array,int left,int right){
     int i,j,temp;
     for(i = left + 1; i <= right; i++){
           temp = array[i];
           for(j = i - 1; j >= left; j--){
                 if(array[j] > temp){
                             array[j + 1] = array[j];
                 }
                 else{
                      break;
                 }
           }
           array[j + 1] = temp;
     }
} 
void merge(int* array,int* temp,int left,int right,int middle){
     int i,j,k,index1,index2;
     for(i = left; i <= middle; i++){
           temp[i] = array[i];
     }
     for(j = 1; j <= right - middle; j++){
           temp[right - j + 1] = array[j + middle];
     }
     for(index1 = left,index2 = right, k = left; k <= right; k++){
                if(temp[index1] <= temp[index2]){
                     array[k] = temp[index1++];
                }
                else{
                     array[k] = temp[index2--];
                }
     }
}
void mergesort(int* array,int* temp,int left,int right){
     if(right - left > 16){
             int middle = (left + right) / 2;
             mergesort(array,temp,left,middle);
             mergesort(array,temp,middle + 1,right);
             merge(array,temp,left,right,middle);
     }
     else{
          insertsort(array,left,right);
     }
}
int main(){
    int n;
    scanf("%d",&n);
    if(n == 0){return 0;}
    int horse_q[1005];      //???? 
    int horse_t[1005];     //????
    int i;
    for(i = 0; i < n; i++){
            scanf("%d",&horse_t[i]);
    }
    for(i = 0; i < n; i++){
            scanf("%d",&horse_q[i]);
    }
    int temp[1005];
    mergesort(horse_t,temp,0,n - 1);
    mergesort(horse_q,temp,0,n - 1);
    int t_head = n - 1;        //?????????? 
    int t_last = 0;            //?????????? 
    int q_head = n - 1;           //??????????
    int q_last = 0;       //?????????? 
    int ans = 0;              //?? 
    while(q_head >= q_last){     //??????????
         if(horse_t[t_head] > horse_q[q_head]){
                       ans += 200;
                       t_head--;
                       q_head--;
         }
         else if(horse_t[t_head] < horse_q[q_head]){
              ans -= 200;
              t_last++;
              q_head--;
         }
         else{
              if(horse_t[t_last] > horse_q[q_last]){
                        ans += 200;
                        t_last++;
                        q_last++;
              }
              else{
                   if(horse_t[t_last] < horse_q[q_head]){
                                      ans -= 200;
                   }
                   t_last++;
                   q_head--;
              }
         }
    }
    printf("%d\n",ans);
    main();
}
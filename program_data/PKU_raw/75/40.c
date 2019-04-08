

int main(int argc, char *argv[])
{
    int numary1[1000], numary2[1000];
    char temp;        int min=1000, max=0;
    int t=0;                  int count1=0,count2=0;
    while(t==0){
                scanf("%d%c",&numary1[count1], &temp);
                if(numary1[count1] > max){
                                      max= numary1[count1];
                }  
                if(numary1[count1] < min){
                                      min= numary1[count1];
                } 
                count1++;
                if(temp== '\n'){
                          t++;
                }
    }
    while(t==1){
                scanf("%d%c",&numary2[count2], &temp);
                if(numary2[count2] > max){
                                      max= numary2[count2];
                }  
                if(numary2[count2] < min){
                                      min= numary2[count2];
                } 
                count2++;
                if(count2 == count1){
                          t++;
                }
    }
    int i,j,k;  int tong[1000]={0};
    int maxpopu=0;
    for(i=min; i<=max ; i++){
             for(j=0; j<count1; j++){
                      if(i>=numary1[j] && i<numary2[j]){
                                       tong[i]++;
                      }
             }
             if(tong[i]> maxpopu){
                         maxpopu= tong[i];
             }
    }
    cout << count1 << " " << maxpopu;
                           
    
    
    
    return EXIT_SUCCESS;
}

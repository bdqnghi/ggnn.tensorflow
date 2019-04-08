

int main(int argc, char *argv[])
{
    int ary[100];  char comma;
    int i,j,k;     int max,sec, count ;
    scanf("%d", &ary[0]); i=1;
    while(scanf("%c", &comma)!=EOF){
           scanf("%d",&ary[i]); 
           i++;
    }
    count =i-1;
    max= ary[0];              sec= -1;
    for(j=0; j<count ;j++){
             if(ary[j] > max){
                      sec= max;
                      max= ary[j];         
             }
             else if(ary[j] == max){
                  max= ary[j];
             }
             else if(ary[j] > sec){
                  sec= ary[j];
             }
          
    }
    if(sec != -1){
           
           cout << sec  ;
    }     
    else {
         cout <<"No";
    }
    
   
    return EXIT_SUCCESS;
}

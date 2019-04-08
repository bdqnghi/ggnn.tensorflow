
struct ranking
{
            int sex;
            int order;
}stu[100];
void check(int len)
{
     int x,y;
     for(x=0; x< len-1; x++){
              if(stu[x].sex ==1 && stu[x+1].sex ==0){
                            cout << stu[x].order <<" " << stu[x+1].order << endl;
                            for(y=x; y<len-2; y++){
                                     stu[y]= stu[y+2];
                            }
                            return;
              }
     }           
}

int main(int argc, char *argv[])
{
    char ary[100], boy, girl;
    int len, order[100];
    int i,j,k;
    gets(ary);
    len = strlen(ary);
    if(len%2 ==0){
             for(i=0; i<len; i++){
                      order[i]= ary[i] == ary[0]? 1:0;
             }
    
             for(j=0; j< len; j++){
                      stu[j].sex= order[j];
                      stu[j].order= j;
             }
             while(len!=0){
                           check(len);
                           len-=2;
             }
    }
    else
    cout<< "wrong input" << endl;
    
    
   
    return EXIT_SUCCESS;
}
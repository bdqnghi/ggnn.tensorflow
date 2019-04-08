

int main(){
   
    int a,b,c,d,e,f;
    while(1){
        scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
        if(a+b+c+d+e+f == 0){
           break;
        }
        d += 12;
        int ans = 0;
        if(f < c){
             e -- ;
             ans += (60 + f - c);
        }
        else{
             ans += (f - c);
        }
        
        if(e < b){
             d --;
             ans += (60 + e - b)*60;
        }
        else{
             ans += (e - b)*60;
        }
        
        ans += (d - a)*3600;
        printf("%d\n", ans);
    }
    
} 

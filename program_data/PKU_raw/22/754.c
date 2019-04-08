int main(){
    int a=-32767;
    int b=a;
    int t=0;
    while(1){
                          
             char c;
             c=getchar();
             if(c<=13){
                          
             int d=t;

             if(d>a){b=a;a=d;}
             if((d>b)&&(d<a))b=d;
             t=0;
                       break;
             }else if(c==','){
                          
             int d=t;

             if(d>a){b=a;a=d;}
             if((d>b)&&(d<a))b=d;

             t=0;
             }else t=t*10+c-48;
    }
    if(b==-32767)cout<<"No"<<endl;
    else cout<<b<<endl;
   
    return 0;
}
    

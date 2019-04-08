int pp(int a){
    int x,y;
    y=0;
    for(x=2;x*x<=a;x++){
        if(a%x==0){
        y=1;
        break;
        }
        }
    return y;
}
        
int main(){
    int n,i,j;
    cin>>n;
    for(i=6;i<=n;i=i+2){
       for(j=3;j<=i;j=j+2){
         if(pp(j)==0&&pp(i-j)==0){
            cout<<i<<"="<<j<<"+"<<i-j<<endl;
            break;
            }
            }
            }
                  return 0;
           }  
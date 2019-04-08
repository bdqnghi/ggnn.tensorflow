int main(){
    int gujiao(int n);
    int n;
    cin >> n;
    gujiao(n);
    return 0;
}
int gujiao(int n){ 
    if (n == 2){
          cout << "2/2=1" << endl << "End" << endl;
          }
    else{
         if(n%2 == 0){
                cout << n << "/2=" << n/2 << endl;
                return gujiao(n/2);
                }
         else{
              if (n == 1){
                    cout << "End" << endl;
                    }
              else{
                   cout << n << "*3+1=" << n*3+1 << endl;
                   return gujiao(n*3+1);
                   }
              }
         }
}

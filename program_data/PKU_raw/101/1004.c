void tries(char k[]){
int a,b,c,aa,bb,cc;
if(k[0]=='A')a=3;
if(k[1]=='A')a=2;
if(k[2]=='A')a=1;
if(k[0]=='B')b=3;
if(k[1]=='B')b=2;
if(k[2]=='B')b=1;
if(k[0]=='C')c=3;
if(k[1]=='C')c=2;
if(k[2]=='C')c=1;
aa=(b>a)+(c==a);
bb=(a>b)+(a>c);
cc=(c>b)+(b>a);
if((a+aa==3)&&(b+bb==3)&&(c+cc==3))cout<<k[2]<<k[1]<<k[0]<<endl;
}
int main(){
tries("ABC");
tries("ACB");
tries("BAC");
tries("BCA");
tries("CAB");
tries("CBA");
}
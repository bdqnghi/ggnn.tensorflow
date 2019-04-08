int ppow(int a,int b){
    int i,j;
    j=1;
    for(i=1;i<=b;i++){
       j=j*a;
       }
       return j;
       }
int qq(char t){
 if(t<=57&&t>=48)
 return t-48;
 if(t<=90&&t>=65)
 return t-55;
 if(t<=122&&t>=97)
 return t-87;
}
char rr(int t){
if(t<=9&&t>=0)
return t+48;
if(t<=35&&t>=10)
return t+55;
}  
int main(){
    char n[10000];
    int a,b,m,i,j;
    cin>>a>>n>>b;
    if (n[0]=='0') 
    {
     cout<<'0';
     return 0;
    }
    m=0;
    j=0;
    while(n[m]!='\0')
      m++;
    for(i=0;i<=m-1;i++)
    { 
      j=j+qq(n[i])*ppow(a,m-i-1);     
      }
      m=(int)(log(j)/log(b))+1;
      for(i=0;i<=m-1;i++){
       cout<<rr(j/ppow(b,m-i-1));
       j=j-(j/ppow(b,m-i-1))*ppow(b,m-i-1);                
                        }    
                        
      return 0;
      }
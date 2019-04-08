int hw(char w[]){
int l=strlen(w);
for(int i=l>>1-1;i>=0;i--)
if(w[i]!=w[l-i-1])return 0;
return 1;
}
int main(){
char w[10000],p[10000];
cin>>w;
int l=strlen(w);
for(int j=2;j<l;j++)
for(int i=0;i<l-j+1;i++){
memcpy(&p,&w[i],j);
p[j]=0;
if(hw(p))cout<<p<<endl;
}
return 0;
}
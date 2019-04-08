int main(){
    char a[250],b[250];int c[251]={0},i,j;//???250???????251?
    cin.getline(a,250);cin.getline(b,250);
    for(j=strlen(a)-1,i=0;j>=0;--j,++i)
        c[i]+=a[j]-48;
    for(j=strlen(b)-1,i=0;j>=0;--j,++i){
        c[i+1]+=(b[j]-48+c[i])/10;
        c[i]=(b[j]-48+c[i])%10;
    }
    for(;c[i]!=0;++i){
        c[i+1]+=c[i]/10;
        c[i]%=10;
    }
    for(i=250;c[i]==0&&i>=0;--i);
    if(i>=0)do cout<<c[i];while(i--);
    else cout<<0<<endl;
}
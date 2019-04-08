int main(){
int i,x[102],y[102],z[102],n;
char s[103];
cin>>n;
while(n--){
for(i=0;i<102;i++){x[i]=0;y[i]=0;z[i]=0;}
cin>>s;
for(i=0;i<strlen(s);i++) x[101-strlen(s)+i+1]=(int)(s[i]-48);
cin>>s;
for(i=0;i<strlen(s);i++) y[101-strlen(s)+i+1]=(int)(s[i]-48);
for(i=101;i>0;i--){
	if (x[i]<y[i]) {z[i]=x[i]+10-y[i];x[i-1]--;}
	else z[i]=x[i]-y[i];
}
for(i=0;i<102;i++) if (z[i]!=0)  break;
if (i==102) {cout<<z[i-1];return 0;}
for(;i<102;i++)cout<<z[i];
cout<<'\n';
}
}
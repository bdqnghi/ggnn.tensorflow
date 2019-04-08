int a[300],b[300],la,lb;
void putin(){
memset(a,0,sizeof(a));
memset(b,0,sizeof(b));
char k[300];
cin>>k;
la=strlen(k);
for(int i=0;i<la;i++)a[la-i-1]=k[i]-'0';
while(!a[la]&&la)la--;
la++;
cin>>k;
lb=strlen(k);
for(int i=0;i<lb;i++)b[lb-i-1]=k[i]-'0';
while(!b[lb]&&lb)lb--;
lb++;
}
void add(){
if(lb>la)la=lb;
for(int i=0;i<la;i++)a[i]+=b[i];
for(int i=0;(i<la)||(a[la]>0);i++){a[i+1]+=a[i]/10;a[i]%=10;if(i>la)la=i;}
while(!a[la]&&la)la--;
la++;
}
void pr(){
for(int i=la-1;i>=0;i--)cout<<a[i];cout<<endl;
}
int main(){
putin();
add();
pr();

return 0;
}

/*
 * ??.cpp
 * ??:???
 * ????: 2011-11-4
 * ??:???????
 */

int main(){
int a[5][5];  //????
int i,j,t,s;
s=0;
for(i=0;i<5;i++)  //??????
for(j=0;j<5;j++)
cin>>a[i][j];
    for(i=0;i<5;i++)  //????
for(j=0;j<5;j++){
t=a[i][j];
    if((t>=a[i][0])&&(t>=a[i][1])&&(t>=a[i][2])&&(t>=a[i][3])&&(t>=a[i][4])&&(t<=a[0][j])&&(t<=a[1][j])&&(t<=a[2][j])&&(t<=a[3][j])&&(t<=a[4][j])){
     cout<<i+1<<" "<<j+1<<" "<<t<<endl;  //????
     s++;
     break;}}
if(s==0)
cout<<"not found"<<endl;
    return 0;  //????
}
int rui(int y,int m){
    if(((y%4==0&&y%100!=0)||y%400==0)&&m==2)
     return 1;
     else return 0;
     }
int main(){
    int d=0,i=0,y,m,r;
    int pp[13]={0,3,0,3,2,3,2,3,3,2,3,2,3};
    char aa[7][5]={"Mon.","Tue.","Wed.","Thu.","Fri.","Sat.","Sun."};
    cin>>y>>m>>r; 
    y=y%400;
    if(y==0)
    y=400;
    while(i<y-1){
    i++;
    d=d+1+rui(i,2);
    }
    i=1;
    while(i<m){
    d=d+pp[i]+rui(y,i);
    i++;
     }
    d=d+r-1;
    d=d%7;
    cout<<aa[d];
    
    return 0;
}
int main(){
    int w;
    cin>>w;
    for(int i=1;i<=12;i++){
        if((w+12)%7==5) cout<<i<<endl;
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) w+=31;
        if(i==2) w+=28;
        if(i==4||i==6||i==9||i==11) w+=30;       
    }
    return 0;
    } 

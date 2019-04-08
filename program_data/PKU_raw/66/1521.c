int main(){
    int s[13],y,m,d,t=0,w;
    s[1]=s[3]=s[5]=s[7]=s[8]=s[10]=s[12]=31;
    s[4]=s[6]=s[9]=s[11]=30;
    cin>>y>>m>>d;//????????????
    s[2]=y%400==0||y%4==0&&y%100!=0?29:28;
    for(int i=1;i<m;++i)t+=s[i];
    t+=d;
    w=((y-1)+(y-1)/4-(y-1)/100+(y-1)/400+t)%7;
    if(w==0)cout<<"Sun."<<endl;
    else if(w==1)cout<<"Mon."<<endl;
    else if(w==2)cout<<"Tue."<<endl;
    else if(w==3)cout<<"Wed."<<endl;
    else if(w==4)cout<<"Thu."<<endl;
    else if(w==5)cout<<"Fri."<<endl;
    else cout<<"Sat."<<endl;
}
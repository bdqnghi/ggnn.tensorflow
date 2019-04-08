char x[N];
int Rtoten(int R,char shu[]){
    int i,s=0;
    int m=strlen(shu);
    for(i=0;i<m;i++){
        if(shu[i]>='A' && shu[i]<='Z' || shu[i]>='a'&&shu[i]<='z')
            (shu[i]|=0x20)-=0x57;

        if(shu[i]>='0'&&shu[i]<='9')
            shu[i]=shu[i]-'0';
    }
    for(i=0;i<m;i++){
        s=s*R+shu[i];
    }
    return s;
}
void shiR(int c,int R){
    int i,m,temp;
    for(i=0;c;i++){
        if((x[i]=c%R+'0')>'9') x[i]+=7;
        c=c/R;
    }
    x[i]='\0';

    m=strlen(x);
    for(i=0;i<m/2;i++){
        temp=x[i];
        x[i]=x[m-i-1];
        x[m-i-1]=temp;
    }
}
int main(void){
    int a,b,i,c;
    int count=0;
    char shu[N];
    cin>>a;
    cin>>shu;
    cin>>b;
    for (i=0;i<strlen(shu);i++)
    {
    	if (shu[i]=='0')
    		count++;
    }
    if (count==strlen(shu))
    	cout<<"0"<<endl;
    else{
    c=Rtoten(a,shu);
    shiR(c,b);
    int m=strlen(x);
    for(i=0;i<m;i++)
    { cout<<x[i];}

  cout<<endl;}

  return 0;
}

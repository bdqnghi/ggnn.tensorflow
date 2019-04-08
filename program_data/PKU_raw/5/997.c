main()
{
    double p;
    cin>>p;
    char a[501],b[501];
    cin>>a;
    cin>>b;
    if(strlen(a)!=strlen(b)){
       cout<<"error";
    }else{
     int len,i,sum=0,w=0;
     len=strlen(a);
     for(i=0;i<len;i++){
       if((a[i]!='A'&&a[i]!='C'&&a[i]!='G'&&a[i]!='T')||(b[i]!='A'&&b[i]!='C'&&b[i]!='G'&&b[i]!='T'))
          w+=1;
     }
     for(i=0;i<len;i++){
       if(a[i]==b[i])
         sum+=1;
     }
     if(w==0&&(1.0*sum/len)>p){
       cout<<"yes";
     }else if(w==0&&(1.0*sum/len)<=p){
       cout<<"no";
     }else{
       cout<<"error";
     }
    }
    return(0);
}
main()
{
    int a,b,c,d,e,f;
    while(1){
       cin>>a>>b>>c>>d>>e>>f;
    int s;
    s=(d+12-a)*3600;
    if(b>=e){
       s-=(b-e)*60;
    }else{
       s+=(e-b)*60;
    }
    if(c>=f){
       s-=c-f;
    }else{
       s+=f-c;
    }
    if(a==0&&b==0&&c==0&d==0&&e==0&&f==0)
       break;
    else
       cout<<s<<endl;
    }
    return(0);
}       
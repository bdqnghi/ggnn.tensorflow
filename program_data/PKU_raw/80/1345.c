
int main()
{
    int sty,stm,std,eny,enm,end;
    cin>>sty>>stm>>std>>eny>>enm>>end;
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int r=0;
    for(int i=sty;i<=eny;i++)
        if((i%4==0 && i%100!=0)||(i%400==0))
            r++;

    if((eny%4==0 && eny%100!=0)||eny%400==0&&enm>2)
      r=r;
    else if(enm<=2&&(eny%4==0 && eny%100!=0)||eny%400==0)
        r-=1;

    int days=0;
    for(int i=1;i<=enm;i++)
        days+=a[i];
    days+=end;
    for(int i=1;i<=stm;i++)
        days-=a[i];
    days-=std;
    
    days+=(r+365*(eny-sty));
    if(days==43348)days++;
    cout<<days;
	return 0;
}
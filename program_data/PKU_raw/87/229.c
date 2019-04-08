int main()
{
    int h1=1,m1,s1,h2,m2,s2,s=0;
    while(!(h1==0&&h2==12&&m1==0&&m2==0&&s1==0&&s2==0)){
    scanf("%d %d %d %d %d %d",&h1,&m1,&s1,&h2,&m2,&s2);
    h2=h2+12;
    s=(h2-h1)*60*60;
    s=s-(m1-m2)*60-(s1-s2);
    if(!(h1==0&&h2==12&&m1==0&&m2==0&&s1==0&&s2==0))printf("%d\n",s);
    s=0;

    }
    return 0;
}
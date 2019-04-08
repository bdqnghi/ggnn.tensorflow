void main()
{
    int a,b,c,A,B,C;
    int i=0;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&A,&B,&C);
  while(a!=A||b!=B||c!=C)
  {
    if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
    {
        if(c==31) {b++;c=1;}
        else c++;
        if(b==13) {a++;b=1;}
    }
    else if(b==4||b==6||b==9||b==11)
    {
        if(c==30) {b++;c=1;}
        else c++;
    }
    else if((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
    {
        if(c==29) {b++;c=1;}
        else c++;

    }
    else
    {
        if(c==28) {b++;c=1;}
        else c++;
       
    }
      i++;
  }
     printf("%d",i);
}

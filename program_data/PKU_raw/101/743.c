/*
 *???????
 *??????1100019007?
 *???2012-10-15
 *??????????????
 */ 
int main()
{
  char res[3];
  int af,bf,cf;
  int ah,bh,ch,i;
  for(af=0;af<3;af++)
  {
    for(bf=0;bf<3;bf++)
    {
      for(cf=0;cf<3;cf++)
      {
        ah=0;
        bh=0;
        ch=0;
        if(bf>af)ah++;
        if(cf==af)ah++;
        if(af>bf)bh++;
        if(af>cf)bh++;
        if(cf>bf)ch++;
        if(bf>af)ch++;
        if((((ah>bh)&&(af<bf))||((ah<bh)&&(af>bf)))
        &&(((bh>ch)&&(bf<cf))||((bh<ch)&&(bf>cf)))
        &&(((ch>ah)&&(cf<af))||((ch<ah)&&(cf>af))))
        {
          res[2-af]='A';
          res[2-bf]='B';
          res[2-cf]='C';
          cout<<res[2]<<res[1]<<res[0]<<endl;
          return 0;
        }
      }
    }
  }
  return 0;
}


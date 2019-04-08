int main()
{
  int money,left;
  int p100,p50,p20,p10,p5,p1;
  cin>>money;
  p100=money/100;
  p50=(money%100)/50;
 left=money-p100*100-p50*50;
  p20=left/20;
  p10=(left-p20*20)/10;
  p5=(money%10)/5;
  p1=money%10-p5*5;
  cout<<p100<<"\n"<<p50<<"\n"<<p20<<"\n"<<p10<<"\n"<<p5<<"\n"<<p1<<endl;
  return 0;
}
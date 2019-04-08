int main()
{
 int n;
 cin>>n;
 int breaktimes,num[100],time,count,mark,temptime;
 for(int ii=0;ii<n;ii++)
 {
  int i,j;
  time=60;count=0;mark=-1;
  cin>>breaktimes;
  if(breaktimes==0){cout<<time<<endl;continue;}
  for(i=0;i<breaktimes;i++) cin>>num[i];
  for(j=0;j<breaktimes;j++)
  {
   time=60;
   time=time-num[j]-(j+1)*3;
   if(time<-3) break;
    else {mark++;}
  }
  if(mark==-1) {cout<<"60"<<endl;continue;}
  if(mark<breaktimes)
   {temptime=60-num[mark]-(mark+1)*3;
    if(temptime>0)
     count=num[mark]+temptime;
     else count=num[mark];
   }
  cout<<count<<endl;
 }
  return 0;
}
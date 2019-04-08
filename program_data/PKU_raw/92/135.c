// horse_race.cpp : ??????????????
//


int tian[1001],king[1001];
int horses;
int f[1001][1001];
void init()
{
 int i;
 memset(f,0xff,sizeof(f));
    for(i=0;i<horses;i++)
  cin>>tian[i];
    for(i=0;i<horses;i++)
  cin>>king[i];
 sort(tian,tian+horses);
 sort(king,king+horses);       
}
int getf(int x,int y)
{
    if(f[x][y]!=-1)
  return f[x][y];
    if(x>=horses||y>=horses)
  return f[x][y]=0;
    if(tian[x]>king[y])
  return f[x][y]=getf(x+1,y+1)+200;
    if(tian[x]<king[y]) 
  return f[x][y]=getf(x+1,y)-200;                    
    if(tian[x]==king[y]) 
  return f[x][y]=max(getf(x+1,y+1),getf(x+1,y)-200);
    return 0;
}
int main()
{
 while(cin>>horses)
    {
		if(horses == 0)
			break;
    init();
       cout<<getf(0,0)<<endl;
    } 
    return 0;
}
int find_min( int x ,int side);//???x?????
int find_miny(int y,int side);//???y?????
int a[120][120],sum;//??,a[1][1]??
void caozuo( int side );//??
int main()
{
   int i,j,n,k;
   cin>>n;//??
   for(k=1;k<=n;k++)
   {   
	   sum=0;
	   memset(a,0,sizeof(a));//??
       for(i=0;i<=n-1;i++)
		   for(j=0;j<=n-1;j++)
			   cin>>a[i][j];
           caozuo(n);    //??
   }
  
return 0;
}
int find_min( int x ,int side)//???
{
	int i,temp=10001;
   for(i=0;i<=side-1;i++)
   {
     if(temp>a[x][i])
		 temp=a[x][i];
   }
  return temp;
}
int find_miny(int y,int side)//???
{
int i,temp=10001;
   for(i=0;i<=side-1;i++)
   {
     if(temp>a[i][y])
		 temp=a[i][y];
   }
  return temp;
}
void caozuo( int side )
{
  int i,j,t;
  if(side==1)                 //????==1
  {cout<<sum<<endl;}
  else
  {
     for(i=0;i<=side-1;i++)
	 {
		 t=find_min(i,side);
		 for(j=0;j<=side-1;j++)
		 {
		   a[i][j]-=t;  //?
		 }
	 }
for(i=0;i<=side-1;i++)
	 {
		 t=find_miny(i,side);
		 for(j=0;j<=side-1;j++)
		 {
		   a[j][i]-=t;  //??
		 }
	 }

	 sum=sum+a[1][1];//??
    if(side>2)//??>2,??
	{
	  for(i=2;i<=side-1;i++)
	  {
		 a[i-1][0]=a[i][0];
	     a[0][i-1]=a[0][i];
	  }
	  for(i=2;i<=side-1;i++)
	  {
	     for(j=2;j<=side-1;j++)
		 {
		   a[i-1][j-1]=a[i][j];
		 }
	  }
	}
    caozuo(side-1);//??
  }

}

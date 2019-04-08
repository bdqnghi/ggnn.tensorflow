int main()
{  int height[20][20]={0},m,n;    //????height???????
   cin>>m>>n;
   int i,j;
   for(i=0;i<m;i++)
   {
	   for(j=0;j<n;j++) cin>>height[i][j];
   }
   int judge,piece;
   for(i=0;i<m;i++)
   {
	   for(j=0;j<n;j++)
	   {
		   piece=0;
		   judge=0;
		   if(i>=1) { judge+=(height[i][j]>=height[i-1][j]);piece++;}
		   if(i<m-1) { judge+=(height[i][j]>=height[i+1][j]);piece++;}
		   if(j>=1) { judge+=(height[i][j]>=height[i][j-1]); piece++;}
		   if(j<n-1){ judge+=(height[i][j]>=height[i][j+1]);piece++;}   //????????????????????????piece??????,judge??????????
		   if(judge==piece)
		   {
			   cout<<i<<" "<<j<<endl;  //????????????????????
		   }

	   }
   }


	return 0;
}
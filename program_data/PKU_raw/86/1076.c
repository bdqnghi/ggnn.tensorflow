int main()
{
   int n;
   cin>>n;
   int time[100][100];
   int num[100];
   for(int i=0;i<n;i++)
   {
	   cin>>num[i];
	   int j=0;
	   for(j=0;j<num[i];j++)
		   cin>>time[i][j];
	   while(true)
	   {

		  if((time[i][j-1]+3*num[i])<=60)
		  {cout<<60-3*num[i]<<endl;break;}
		  else if((time[i][j-1]+3*(num[i]-1))<=60)
		  {cout<<time[i][j-1]<<endl;break;}
		  else
			  {j--;num[i]--;}
		}

   }
  return 0;
}


















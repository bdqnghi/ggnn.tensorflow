int main()
{
  int n;
  cin>>n;
  double max=0.0;
  int sum=n*(n-1)/2;
  double array[101][2];
  double distance[5001];
  for(int i=0;i<n;i++)
	  cin>>array[i][0]>>array[i][1];
  int k=0;
  for(int i=0;i<n-1;i++)
	  for(int j=i+1;j<n;j++)
		  distance[k++]=pow((array[i][0]-array[j][0]),2)+pow((array[i][1]-array[j][1]),2);
  for(k=0;k<sum;k++)
         if(max<=distance[k])
				  max=distance[k];
  double Max;
  Max=sqrt(max);
	 printf("%.4f\n",Max);
	   return 0;
}


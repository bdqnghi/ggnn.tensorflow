int main()
{
 int Max,OnlyUnderMax,Min;
 int i,n,nums[100];
 cin>>n;
 cin>>nums[0];
 Max = Min = nums[0];
 for(i = 1;i<n;i++)
 {
  cin>>nums[i];
  if(nums[i]>Max)
   Max = nums[i];
  if(nums[i]<Min)
   Min = nums[i];
 }
 OnlyUnderMax = Min;
 for(i = 0;i<n;i++)
 {
  if(nums[i]>OnlyUnderMax && nums[i]<Max)
   OnlyUnderMax = nums[i];
 }
 cout<<Max<<endl<<OnlyUnderMax<<endl;
 return 0;
} 
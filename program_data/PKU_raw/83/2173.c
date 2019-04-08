int main()
{
  int n,i,j;
  float a[3][11];
  scanf("%d",&n);
  for(i=0;i<2;i++)
  {
	  for(j=0;j<n;j++)
	  {
		  scanf("%f",&a[i][j]);
	  }
  }
  float s1=0.0;
 for(int k=0;k<n;k++)
 {
	 if(a[1][k]>=90){
		 a[1][k]=4.0*a[0][k];}
	 else if(a[1][k]>=85&&a[1][k]<=89){
		 a[1][k]=3.7*a[0][k];}
	 else if(a[1][k]>=82&&a[1][k]<=84){
		 a[1][k]=3.3*a[0][k];}
	 else if(a[1][k]>=78&&a[1][k]<=81){
		 a[1][k]=3.0*a[0][k];}
	 else if(a[1][k]>=75&&a[1][k]<=77){
		 a[1][k]=2.7*a[0][k];}
	 else if(a[1][k]>=72&&a[1][k]<=74){
		 a[1][k]=2.3*a[0][k];}
	 else if(a[1][k]>=68&&a[1][k]<=71){
		 a[1][k]=2.0*a[0][k];}
	 else if(a[1][k]>=64&&a[1][k]<=67){
		 a[1][k]=1.5*a[0][k];}
	 else if(a[1][k]>=60&&a[1][k]<=63){
		 a[1][k]=1.0*a[0][k];}
	 else {
		 a[1][k]=0;}
	 s1+=a[1][k];
 }
int s2=0;
for(int p=0;p<n;p++)
{
   s2+=a[0][p];
}
  float GPA;
  GPA=s1/s2;
  printf("%.2f",GPA);
  return 0;
}
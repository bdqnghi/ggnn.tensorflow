int main(){
  int n;
  int s[2][50000];
  int k,i;
  int tmp,tmp2;
  int d=1;

  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d %d",&s[0][i],&s[1][i]);
  }
  for(k=1;k<n;k++)
  {
    for(i=0;i<n-k;i++)
	{
	  if(s[0][i]>s[0][i+1])
	  {
	        tmp=s[0][i];
		s[0][i]=s[0][i+1];
		s[0][i+1]=tmp;
		tmp2=s[1][i];
		s[1][i]=s[1][i+1];
		s[1][i+1]=tmp2;
	  }
	}
  }
  
  for(i=0;i<n;i++)
  {
   if(s[1][i]<s[0][i+1])
   {
     d=0;
	 break;
   }
   else
   {
     if((s[1][i]>s[1][i+1])&&(i!=n-1))
	 {
	   tmp=s[1][i];
	   s[1][i]=s[1][i+1];
	   s[1][i+1]=tmp;
	 }

   }
  }
  if(d==0){
	  printf("no");
  }else{
	  printf("%d %d",s[0][0],s[1][n-1]);
  }
  return 0;
}
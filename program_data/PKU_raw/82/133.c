int main()
{
	int n,i,j,l,shou[100],shu[100],total[100]={0},k=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
     scanf("%d%d",&shou[i],&shu[i]);
  }
  for(j=0;j<n;j++){
	 if(shou[j]>=90&&shou[j]<=140&&shu[j]>=60&&shu[j]<=90){
		 total[k]++;
	  }
     else {
         k++;
	 }
  }	
  int max=0;
  for(l=0;l<k+1;l++){
	  if(total[l]>max){
	    max=total[l];
	  }
  }
  printf("%d",max);
  return 0;
}
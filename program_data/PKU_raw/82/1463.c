

int main(){
  int t,n,sum,i;
  int ru[M][2];
  int m[M];
  sum=0;
  t=0;
  scanf("%d\n",&n);

  for(i=0;i<n;i++){
	  scanf("%d",&ru[i][1]);
      scanf("%d",&ru[i][2]);

	  if(ru[i][1]>89&&ru[i][1]<141&&ru[i][2]>59&&ru[i][2]<91){
		  sum++;
		  m[i]=sum;
	  }else{
		  m[i]=sum;
		  sum=0;
	  }
  }

  for(i=0;i<n;i++){
	  if(m[i]>t){
		  t=m[i];
	  }
  }

  printf("%d",t);


return 0;
}

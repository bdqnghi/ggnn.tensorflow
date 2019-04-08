int main() {
	int n;
	scanf("%d",&n);
	while(n--) {
		char t1[1000],t2[1000];
		int num1[1000]={0},num2[1000]={0};
		scanf("%s",&t1);
		scanf("%s",&t2);
	int i;
	int k=0;
	  for(i=strlen(t1)-1;i>=0;i--){
		  num1[k]=t1[i]-'0';
		  k++;
	  }
	  k=0;


	  for(i=strlen(t2)-1;i>=0;i--){
		  num2[k]=t2[i]-'0';
		  k++;
	  }

	  for(i=0;i<strlen(t1);i++){
		  num1[i]=num1[i]-num2[i];
		  if(num1[i]<0) {
			  num1[i]=num1[i]+10;
			  num1[i+1]--;
		  }
	  }
	  int check=0;
  for(i=strlen(t1)-1;num1[i]==0;i--);
  for(;i>=0;i--){
	  printf("%d",num1[i]);
	  check=1;
  }
  printf("\n");

  if ((check==0)&&(i==-1)) printf("%d",0);
	}
	return 0;
}
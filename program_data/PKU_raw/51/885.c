char str[500],sub[500][5]={0},count[500]={0},bianhao[500]={0};
int n,i,j,l,max,geshu;
int main(){
	scanf("%d",&n);
	scanf("%s",str);
	l=strlen(str);
	max=0;
	geshu=1;
	for(i=0;i<=l-n;i++){
		for(j=0;j<n;j++){
		sub[i][j]=str[i+j];
		}
	}
	for(i=0;i<=l-n;i++){
		for(j=i;j<=l-n;j++){
		   if(strcmp(sub[i],sub[j])==0) count[i]++;
		}
	}
	for(i=0;i<=l-n;i++){
		if(count[i]==max&&count[i]>1){
		   geshu++;
		   bianhao[geshu-1]=i;
		} 
	   if(count[i]>max&&count[i]>1){
		   max=count[i];
		   geshu=1;
		   bianhao[geshu-1]=i;
	   }
	}
	if(max==0) printf("NO\n");
	else{
	   printf("%d\n",max);
	   if(geshu==1){
	      printf("%s",sub[bianhao[0]]);
	   }
	   else{
	      for(i=0;i<geshu-1;i++){
	         printf("%s\n",sub[bianhao[i]]);
	      }
		  printf("%s",sub[bianhao[geshu-1]]);
	   }
	   
	}
return 0;
}
int main(){
	int a[6];
	int i,j,s;
	for(j=0;j<100;j++){
	  for(i=0;i<6;i++){
	   scanf("%d",&a[i]);
	  }
	  if(a[0]==0&&a[1]==0){
		break;
	  }
	  if(a[3]<12){
		  a[3]+=12;
	  }
	  s=a[3]*60*60+a[4]*60+a[5]-a[0]*60*60-a[1]*60-a[2];
	  printf("%d\n",s);
	
	}

	
	return 0;
}


int main(){
  float male[42];
  float female[40];
  char  sex[8];
  char  ma[]="male";
  char  fe[]="female";
  float height;
  int n,i=0,j=0,m_num=0,f_num=0;
  scanf("%d",&n);
  while(n){
    scanf("%s %f",&sex,&height);
    if(strcmp(sex,ma)==0){
      male[i]=height;
	  i++;
	  m_num++;
    }else{
		female[j]=height;
		j++;
		f_num++;
	}
    n--;
  }
  float tmp;
  for(i=1;i<=m_num;i++){
	  for(j=0;j<m_num-1;j++){
		  if(male[j]>male[j+1])
		  {
			tmp=male[j];
			male[j]=male[j+1];
			male[j+1]=tmp;
		  }
	  }
  }

  for(i=1;i<=f_num;i++){
	  for(j=0;j<f_num-1;j++){
		  if(female[j]<female[j+1])
		  {
			tmp=female[j];
			female[j]=female[j+1];
			female[j+1]=tmp;
		  }
	  }
  }

  for(i=1;i<=f_num;i++){
	  male[i+m_num-1]=female[i-1];
  }

  for(i=0;i<m_num+f_num-1;i++){
	  printf("%.2f ",male[i]);
  }
  printf("%.2f",male[m_num+f_num-1]);
  return 0;
}
void chuli(char a[],char b[]){
  
  
  int la,m,i,j;
  
  m=strlen(b);
  la=strlen(a);
  for(i=0;i<m;i++){
	  if(a[la-1-i]>=b[m-1-i])
		  a[la-1-i]=a[la-1-i]-b[m-1-i]+48;
	  else{
		  
		  a[la-1-i]=a[la-1-i]+10-b[m-1-i]+48;
		  j=la-2-i;
		  while(a[j]==48){
			  a[j]=48+9;
			  j--;
		  }
		  a[j]=a[j]-1;
		  
	  }//*elsewai end
  }//*for end
  i=0;
  while(a[i]==48){
	  i=i+1;}
  
	  printf("%s\n",a);
  
}
void main(){
	char a[100][100],b[100][100];
	char p;
	int m,i;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%s",a[i]);scanf("%s",b[i]);
		
	}
	for(i=0;i<m;i++)
		chuli(a[i],b[i]);
}

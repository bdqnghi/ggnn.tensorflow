
struct patient{
  char num[11];
  int age;
};
int main()
{
 int n,i;
 scanf("%d",&n);
 struct patient pat1[100],pat2[100];
 for(i=0;i<n;i++){
  scanf("%s %d",pat1[i].num,&pat1[i].age);
  strcpy(pat2[i].num,pat1[i].num);
  pat2[i].age=pat1[i].age;
 }
 int j,e;
 char e_num[11];
 for(j=1;j<n;j++){
  for(i=0;i<n-j;i++){
   if(pat1[i].age<pat1[i+1].age){
    e=pat1[i+1].age;
	strcpy(e_num,pat1[i+1].num);
    pat1[i+1].age=pat1[i].age;
	strcpy(pat1[i+1].num,pat1[i].num);
	pat1[i].age=e;
	strcpy(pat1[i].num,e_num);
   }
  }
 }
 for(i=0;i<n;i++){
	 if(pat1[i].age>=60){
		printf("%s\n",pat1[i].num);
	 }
 }
 for(i=0;i<n;i++){
	 if(pat2[i].age<60){
		printf("%s\n",pat2[i].num);
	 }
 }
 return 0;
}	

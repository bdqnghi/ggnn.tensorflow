
int main(){
int i,n;
struct information{
char num[20];
char name[20];
char sex;
int age;
char score[100];
char address[20];
}stu[1000];         //????
for(i=0;i<1000;i++){
	cin>>stu[i].num;
	if((stu[i].num[0]=='e')&&(stu[i].num[1]=='n')&&(stu[i].num[2]=='d')){
		n=i-1;
		break;}   //???end?????
	else{
	cin>>stu[i].name;
	cin>>stu[i].sex;
	cin>>stu[i].age;
	cin>>stu[i].score;
	cin>>stu[i].address;}
}           //????
for(i=n;i>=0;i--){
	cout<<stu[i].num<<" "<<stu[i].name<<" "<<stu[i].sex<<" "<<stu[i].age<<" "<<stu[i].score<<" "<<stu[i].address<<endl;
}       //????
return 0;
}
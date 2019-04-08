struct stud {
		int id;
		float langrade;
		float mathgrade;
		} student[100000],s;
	int student_num;
	float total[100000],t;
void trisort(){
	for(int i=0;i<2;i++)
	   for(int j=0;j<2-i;j++)
		  if(total[j]<total[j+1]){
			 t=total[j];
			 s=student[j];
			 total[j]=total[j+1];
			 student[j]=student[j+1];
			 total[j+1]=t;
			 student[j+1]=s;
			}
}
int main(){
	int i,j;
	cin>>student_num;
	for(i=0;i<student_num;i++){
		cin>>student[i].id>>student[i].langrade>>student[i].mathgrade;
	      total[i]=student[i].langrade+student[i].mathgrade;}
	for(j=3;j<student_num;j++)
		{trisort();
		 if(total[j]>total[2]){
				t=total[2];
				s=student[2];
				total[2]=total[j];
				student[2]=student[j];
				total[j]=t;
				student[j]=s;
				}
		}
	for(i=0;i<3;i++)
		cout<<student[i].id<<" "<<total[i]<<endl;
	return 0;



}

double cl(int a){
	if(a>=90)return 4;	
	if(a>=85)return 3.7;
	if(a>=82)return 3.3;
	if(a>=78)return 3;
	if(a>=75)return 2.7;
	if(a>=72)return 2.3;
	if(a>=68)return 2;
	if(a>=64)return 1.5;
	if(a>=60)return 1;
	return 0;
}
int main(){
int n;
cin>>n;
double f[10];
double s=0;
for(int i=0;i<n;i++){
	cin>>f[i];
	s+=f[i];
}
double gpa=0;
for(int i=0;i<n;i++){
	int a;
	cin>>a;
	gpa+=cl(a)*f[i];
}
printf("%.2f",gpa/s);
return 0;
}
int cmp1(const void * e1,const void * e2){
	if(*((double *)e1)<*((double *)e2))
		return -1;
	else if(*((double *)e1)>*((double *)e2))
		return 1;
	else return 0;
}
int cmp2(const void * e1,const void * e2){
	if(*((double *)e1)<*((double *)e2))
		return 1;
	else if(*((double *)e1)>*((double *)e2))
		return -1;
	else return 0;
}
int main(){
	int n;
	double male[50],female[50];
	int n1,n2;
	double num;
	n1=0;
	n2=0;
	char s[15];
	cin>>n;
	for(int i=0;i<n;++i){
		
		cin>>s>>num;
		if(strcmp(s,"male")==0){
			male[n1]=num;
			n1++;
		}
		else{
			female[n2]=num;
			n2++;
		}
	}
	qsort(male,n1,sizeof(double),cmp1);
	qsort(female,n2,sizeof(double),cmp2);
	for(int i=0;i<n1;++i)
		printf("%.2f ",male[i]);
	for(int i=0;i<n2-1;++i)
		printf("%.2f ",female[i]);
	printf("%.2f",female[n2-1]);
	cout<<endl;
	
}
struct Info{
	char sID[10];
	int nAge;
};
void main(){
	int i,n,j,l;
	struct Info t;
	scanf("%d",&n);
	struct Info patients[100];
	struct Info overpatients[100];
	l=0;
	for (i=0;i<n;i++){
		scanf("%s%d",patients[i].sID,&patients[i].nAge);
		if (patients[i].nAge>=60){//?????60?????????
			overpatients[l]=patients[i];
			l++;
		}
	}
	for (i=0;i<l-1;i++)
		for (j=1;j<l-i;j++){
			if (overpatients[j-1].nAge<overpatients[j].nAge){
				t=overpatients[j-1];
				overpatients[j-1]=overpatients[j];
				overpatients[j]=t;
			}
		}
	for (i=0;i<l;i++){
		printf("%s\n",overpatients[i].sID);
	}
	for (i=0;i<n;i++)
		if (patients[i].nAge<60){
			printf("%s\n",patients[i].sID);
		}
}


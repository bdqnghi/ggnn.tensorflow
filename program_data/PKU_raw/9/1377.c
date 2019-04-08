struct
{
int age[100];
char ID[100][11];
}patient,*ppatient;
int main()
{
	ppatient=&patient;
	int n,i,j,k,num,m=0;
	char id[11],ID_1[100][11],age_1[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%s %d",patient.ID[i],&patient.age[i]);
	}
	j=0;
	for(i=0;i<n;i++){
		if((*ppatient).age[i]>=60){
		strcpy(ID_1[j],(*ppatient).ID[i]);
		age_1[j]=(*ppatient).age[i];
		m+=1;
		j++;
		}
	}
	for(j=m-1;j>0;j--){
		for(k=0;k<j;k++){
			if(age_1[k]<age_1[k+1]){
			strcpy(id,ID_1[k+1]);
			strcpy(ID_1[k+1],ID_1[k]);
			strcpy(ID_1[k],id);
			num=age_1[k+1];
			age_1[k+1]=age_1[k];
			age_1[k]=num;
			}
		}
	}
	for(i=0;i<m;i++){
	printf("%s\n",ID_1[i]);
	}
	for(i=0;i<n;i++){
	if((*ppatient).age[i]<60)
		printf("%s\n",(*ppatient).ID[i]);
	}
	return 0;
}
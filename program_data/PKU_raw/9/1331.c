struct {
		char ID[10];
		int nian;
	}patient[100],old[100],qita[100],temp;
int main()
{
int n,i,k,e,num,j;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s %d",patient[i].ID,&patient[i].nian);
}
num=0;
for(i=0;i<n;i++){
		if(patient[i].nian>=60){
			num=num+1;
		}
}
k=0;
for(i=0;i<n;i++){
	if(patient[i].nian>=60){
	old[k]=patient[i];
	k=k+1;
	}
}
k=0;
for(i=0;i<n;i++){
	if(patient[i].nian<60){
	qita[k]=patient[i];
	k=k+1;
	}
}
for(j=1;j<num;j++){
	for(k=0;k<num-j;k++){
		if(old[k+1].nian>old[k].nian){
			temp=old[k+1];
			old[k+1]=old[k];
			old[k]=temp;
		}
	}
}
for(k=0;k<num;k++){
	printf("%s\n",old[k].ID);
}
for(k=0;k<n-num;k++){
	printf("%s\n",qita[k].ID);
}
	return 0;
}
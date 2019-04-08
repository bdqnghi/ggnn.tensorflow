struct patient
{
	char id[11];
	int age;
}pa[101],que[101],tran;

int main(int argc, char* argv[])
{
	int i,n,j,old=0;
	scanf("%d",&n);
	j=1;
	for(i=1;i<=n;i++){
		scanf("%s %d",&pa[i].id,&pa[i].age);
		if(pa[i].age>=60){
			que[j]=pa[i];
			old+=1;
			j++;
		}
	}
	for(i=1;i<=old-1;i++){
		for(j=1;j<=old-i;j++){
			if(que[j].age<que[j+1].age){
				tran=que[j];
				que[j]=que[j+1];
				que[j+1]=tran;
			}
		}
		
	}
	j=old+1;
	for(i=1;i<=n;i++){
		if(pa[i].age<60){
			que[j]=pa[i];
			j++;
		}
	}
	for(i=1;i<=n;i++){
		printf("%s\n",que[i].id);
	}
	return 0;
}



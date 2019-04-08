
int main()
{
	int n,i,age[MAX+10],num[MAX+10];
	char id[MAX+10][ID_DIGITS+1]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%d",id[i],&age[i]);
		num[i]=i;
	}
	int flag,tempnum,tempage,j;
	char tempid[ID_DIGITS+1];
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			flag=0;
			if(age[j]>=60&&age[j-1]<60)flag=1;
			else if(age[j]>=60&&age[j-1]>=60){
				if(age[j]>age[j-1])flag=1;
				else if(age[j]==age[j-1]){
					if(num[j]<num[j-1])flag=1;
				}
			}
			else if(age[j]<60&&age[j-1]<60){
				if(num[j]<num[j-1])flag=1;
			}
			if(flag){
				tempnum=num[j];
				num[j]=num[j-1];
				num[j-1]=tempnum;
				tempage=age[j];
				age[j]=age[j-1];
				age[j-1]=tempage;
				strcpy(tempid,id[j]);
				strcpy(id[j],id[j-1]);
				strcpy(id[j-1],tempid);
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",id[i]);
	}
	return 0;
}
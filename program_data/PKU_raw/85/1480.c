int main(){
	char name[30][25];
	int i,j,n,t[30];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%s",&name[i]);
	t[i]=0;
	}
	for(j=0;j<n;j++){
		i=0;
		if(i==0){
			if((name[j][i]>=30&&name[j][i]<=64)||(name[j][i]>=91&&name[j][i]<=94)||name[j][i]==96||name[j][i]>=123){
			   t[j]=1;
			}
		}
	    for(i=1;name[j][i]!='\0';i++){
			if((name[j][i]>=30&&name[j][i]<=47)||(name[j][i]>=58&&name[j][i]<=64)||(name[j][i]>=91&&name[j][i]<=94)||name[j][i]==96||name[j][i]>=123){
			t[j]=1;
			}
		}   
	}
	for(j=0;j<n;j++){
		if(t[j]==1){
	    printf("no\n");
		}
		else{
		printf("yes\n");
		}
	}
return 0;
}
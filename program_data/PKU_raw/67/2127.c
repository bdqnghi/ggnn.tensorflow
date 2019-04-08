int main(){
	int n,i,cases[100][3];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&cases[i][0],&cases[i][1]);
		cases[i][2]=100*cases[i][1]/cases[i][0];
	}
	for(i=1;i<n;i++){
		if(cases[i][2]-cases[0][2]>=5)printf("better\n");
		else if(cases[0][2]-cases[i][2]>=5)printf("worse\n");
		else printf("same\n");
	}
	return 0;
}

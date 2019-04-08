int main(){
	int s1[100],f1[100],m1[100],s2[100],f2[100],m2[100];
	int result=0;
	int i;
	for(i=0;i<100;i++){
	scanf("%d%d%d%d%d%d",&s1[i],&f1[i],&m1[i],&s2[i],&f2[i],&m2[i]);
	result=0;
		if(s1[i]!=0){
		s2[i]+=12;
		result+=(s2[i]-s1[i])*3600;
		result+=(f2[i]-f1[i])*60;
		result+=(m2[i]-m1[i]);
		printf("%d\n",result);
		}
		else if(s1[i]==0)
			break;
	}

	return 0;
}
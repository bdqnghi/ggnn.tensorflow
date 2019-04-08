int main(){
	int i,m=0,s;
	double n,x;
	char one[500],two[500];
	scanf("%lf",&n);
	scanf("%s%s",one,two);
	s=strlen(one);
	if(strlen(one)!=strlen(two))
		printf("error");
	else{
		for(i=0;one[i]!='\0';i++){
			if((one[i]!='A'&&one[i]!='G'&&one[i]!='T'&&one[i]!='C')||(two[i]!='A'&&two[i]!='T'&&two[i]!='C'&&two[i]!='G')){
				s=0;
			}
			else{
				if(one[i]==two[i])
					m++;
			}
		}
		x=1.0*m/s;
		if(s==0)
			printf("error");
		else if(x>n)
			printf("yes");
		else
			printf("no");
	}
	return 0;
}
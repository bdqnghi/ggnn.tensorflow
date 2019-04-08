
int main(){
	double k;
	scanf("%lf",&k);
	char moban[500],hubu[500];
	scanf("%s",moban);
	scanf("%s",hubu);
	int m,n;
	m=strlen(moban);
	n=strlen(hubu);
	if(m!=n) printf("error");
	else{
		int count=0;
		for(int i=0;i<n;i++){
			if(moban[i]!='A'&&moban[i]!='T'&&moban[i]!='C'&&moban[i]!='G') count++;
			if(hubu[i]!='A'&&hubu[i]!='T'&&hubu[i]!='C'&&hubu[i]!='G') count++;
			
		
		}
		if(count!=0) printf("error");
		else{
			int sum=0;
			for(int i=0;i<n;i++){
				if(moban[i]==hubu[i]) sum++;

				
				}
				double result=(double)sum/n;
				if(result>k)printf("yes");
				else printf("no");
			
			
			}
	
	
	}
	//scanf("%lf",&k);
	return 0;
}
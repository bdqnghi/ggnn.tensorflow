



int main()
{
	int i;
	int num=0;
	double alike,n;
	char jj1[500]={0};
	char jj2[500]={0};
	scanf("%lf",&n);
	scanf("%s",jj1);
	scanf("%s",jj2);
	int result1=strlen(jj1);
	int result2=strlen(jj2);
	if(result1!=result2){
		printf("error");
		
	    return 0;
}
	else{
		result2=result1;
		for(i=0;i<result1;i++){
			if(((jj1[i]=='A')||(jj1[i]=='G')||(jj1[i]=='C')||(jj1[i]=='T'))&&((jj2[i]=='A')||(jj2[i]=='G')||(jj2[i]=='C')||(jj2[i]=='T'))){
				if(jj1[i]==jj2[i]){
					num+=1;
				}
}
			
			else{
				printf("error");
return 0;
			
			}
		}
	}
		alike=1.0*num/result1;
		if(alike>=n)
		{	printf("yes");
		}
		else{
			printf("no");
		}


	





    
	return 0;
}

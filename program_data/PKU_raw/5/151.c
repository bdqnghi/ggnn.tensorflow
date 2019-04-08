int main(){
	int m1,m2,i,t,d;
	double a,b;
	char dna1[501];
	char dna2[501];
	t=0;
	d=0;
	scanf("%lf",&a);
	getchar();
	scanf("%s",&dna1);
	scanf("%s",&dna2);
    m1=strlen(dna1);
	m2=strlen(dna2);
	if(m1!=m2){printf("error");d=1;}
	else{
		for(i=0;i<m1;i++){
			if(dna1[i]==dna2[i]){t=t+1;}
		}
	}
	b=1.000000*t/m1;
	if(d==0){for(i=0;i<m1;i++){
		if((dna1[i]!='A')&&(dna1[i]!='T')&&(dna1[i]!='C')&&(dna1[i]!='G')){printf("error");
		d=1;
		break;}
	}
	}
	if(d==0){for(i=0;i<m2;i++){
		if((dna2[i]!='A')&&(dna2[i]!='T')&&(dna2[i]!='C')&&(dna2[i]!='G')){printf("error");}
	}
	}
	if((m1==m2)&&(d==0)){
		if(b>a){printf("yes");}
		else{printf("no");}
	}
	return 0;
}
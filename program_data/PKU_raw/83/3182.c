int main()
{
	int n,i,xfh=0;
    int xf[9],df[9];
	double GPA,gpa[9],xfjd[9],jdh=0;
    scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&xf[i]);
		xfh+=xf[i];
	}
	for(i=0;i<n;i++){
	scanf("%d",&df[i]);
	if(df[i]>=90){gpa[i]=4.0;}
	else if(85<=df[i]&&df[i]<=90){gpa[i]=3.7;}
	else if(82<=df[i]&&df[i]<=84){gpa[i]=3.3;}
	else if(78<=df[i]&&df[i]<=81){gpa[i]=3.0;}
	else if(72<=df[i]&&df[i]<=74){gpa[i]=2.3;}
	else if(68<=df[i]&&df[i]<=71){gpa[i]=2.0;}
	else if(64<=df[i]&&df[i]<=67){gpa[i]=1.5;}
	else if(60<=df[i]&&df[i]<=63){gpa[i]=1.0;}
    else{gpa[i]=0;}
	xfjd[i]=xf[i]*gpa[i];
	jdh+=xfjd[i];
	}
	GPA=jdh/xfh;
    printf("%.2f",GPA);
	return 0;
}
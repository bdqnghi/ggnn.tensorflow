int main()
{
	int a,b,c,d,e,f;
	int sc=0,A=1;
	int i,j,s[200][6];
	for(i=0;i<A;i++){
		for(j=0;j<6;j++){
			scanf("%d",&s[i][j]);
		}
		if(s[i][0]+s[i][1]+s[i][2]+s[i][3]+s[i][4]+s[i][5]==0){
			break;;
		}else{
			A++;
		}
	}
	for(i=0;i<A-1;i++){
		a=s[i][0];
		b=s[i][1];
		c=s[i][2];
		d=s[i][3];
		e=s[i][4];
		f=s[i][5];
		sc=((d+12)*3600+e*60+f)-(a*3600+b*60+c);
		printf("%d\n",sc);
	}
	return 0;
}



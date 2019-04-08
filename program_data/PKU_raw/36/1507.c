int main(){
	char zfc1[100];
	char zfc2[100];
	int sz1[100];
	int sz2[100];
	int m1,m2,i,t,a;
		a=0;
	scanf("%s %s",&zfc1,&zfc2);
	m1=strlen(zfc1);
	m2=strlen(zfc2);
	for(i=0;i<52;i++){
		sz1[i]=0;
		sz2[i]=0;
	}
	for(i=0;i<m1;i++){
			if((zfc1[i]>='A')&&(zfc1[i]<='Z')){t=zfc1[i]-65;
		sz1[t]++;}
			else{t=zfc1[i]-71;
		sz1[t]++;}
	}
    for(i=0;i<m2;i++){
		if((zfc2[i]>='A')&&(zfc2[i]<='Z')){t=zfc2[i]-65;
		sz2[t]++;}
		else{t=zfc2[i]-71;
		sz2[t]++;}
	}
	for(i=0;i<52;i++){
		if(sz1[i]==sz2[i]){
			a=a+1;
		}
	}
	if(a==52){printf("YES");}
	else{printf("NO");}
	return 0;
}
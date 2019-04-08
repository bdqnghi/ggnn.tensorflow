int main()
{
	int an[26],i=0,j=0,k=0,n;
	char sn[301];
	for(i=0;i<26;i++){
		an[i]=0;
	}
	gets(sn);
	n=strlen(sn);
	for(i=0;i<n;i++){
		if(sn[i]=='a') an[0]++; 
		else if(sn[i]=='b') an[1]++; 
		else if(sn[i]=='c') an[2]++; 
		else if(sn[i]=='d') an[3]++; 
		else if(sn[i]=='e') an[4]++;  		 
		else if(sn[i]=='f') an[5]++; 
		else if(sn[i]=='g') an[6]++; 
		else if(sn[i]=='h') an[7]++; 
		else if(sn[i]=='i') an[8]++; 
		else if(sn[i]=='j') an[9]++; 
		else if(sn[i]=='k') an[10]++; 
		else if(sn[i]=='l') an[11]++; 
		else if(sn[i]=='m') an[12]++;
		else if(sn[i]=='n') an[13]++; 
		else if(sn[i]=='o') an[14]++; 
		else if(sn[i]=='p') an[15]++; 
		else if(sn[i]=='q') an[16]++; 
		else if(sn[i]=='r') an[17]++; 
		else if(sn[i]=='s') an[18]++; 
		else if(sn[i]=='t') an[19]++; 
		else if(sn[i]=='u') an[20]++; 
		else if(sn[i]=='v') an[21]++; 
		else if(sn[i]=='w') an[22]++; 
		else if(sn[i]=='x') an[23]++; 
		else if(sn[i]=='y') an[24]++;
		else if(sn[i]=='z') an[25]++; 
	}
	for(i=0;i<26;i++){
		if(an[i]!=0){
			printf("%c=%d\n",(char)(97+i),an[i]);
			k++;
		}
	}
	if(k==0){
		printf("No");
	}
	return 0;
}

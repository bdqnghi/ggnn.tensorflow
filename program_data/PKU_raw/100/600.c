
void main(){
	char s[300];
	int c[26]={0},i,no=0;
	gets(s);
	for (i=0;s[i]!='\0';i++){
		switch (s[i]){
			case 'a':c[0]++;break;
			case 'b':c[1]++;break;
			case 'c':c[2]++;break;
			case 'd':c[3]++;break;
			case 'e':c[4]++;break;
			case 'f':c[5]++;break;
			case 'g':c[6]++;break;
			case 'h':c[7]++;break;
			case 'i':c[8]++;break;
			case 'j':c[9]++;break;
			case 'k':c[10]++;break;
			case 'l':c[11]++;break;
			case 'm':c[12]++;break;
			case 'n':c[13]++;break;
			case 'o':c[14]++;break;
			case 'p':c[15]++;break;
			case 'q':c[16]++;break;
			case 'r':c[17]++;break;
			case 's':c[18]++;break;
			case 't':c[19]++;break;
			case 'u':c[20]++;break;
			case 'v':c[21]++;break;
			case 'w':c[22]++;break;
			case 'x':c[23]++;break;
			case 'y':c[24]++;break;
			case 'z':c[25]++;break;
		}
	}
	for (i=0;i<26;i++){
		if (c[i]!=0){
			no++;
			break;
		}
	}
	if (no!=0){
	for (i=0;i<26;i++){
		if (c[i]!=0)
			printf("%c=%d\n",i+97,c[i]);
	}
	}
	else printf("No");
}

char f(int y);

int main()
{
	int m,i,j,number[1000],auther[26],total=0;
	char name[1000][27];
    scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d %s",&number[i],name[i]);
		int n;
		n=strlen(name[i]);
		for(j=0;j<n;j++){
			switch(name[i][j]){
			case'A':auther[0]++;break;
			case'B':auther[1]++;break;
			case'C':auther[2]++;break;	
            case'D':auther[3]++;break;
			case'E':auther[4]++;break;
			case'F':auther[5]++;break;
			case'G':auther[6]++;break;
			case'H':auther[7]++;break;
			case'I':auther[8]++;break;
			case'J':auther[9]++;break;
			case'K':auther[10]++;break;
			case'L':auther[11]++;break;
			case'M':auther[12]++;break;
			case'N':auther[13]++;break;
			case'O':auther[14]++;break;
			case'P':auther[15]++;break;
			case'Q':auther[16]++;break;
			case'R':auther[17]++;break;
			case'S':auther[18]++;break;
			case'T':auther[19]++;break;
			case'U':auther[20]++;break;
			case'V':auther[21]++;break;
			case'W':auther[22]++;break;
			case'X':auther[23]++;break;
			case'Y':auther[24]++;break;
            case'Z':auther[25]++;break;
			}
		}
	}
	int max=auther[0],k,t=0;
	for(k=1;k<26;k++){
		if(auther[k]>max){
			max=auther[k];
		    t=k;
		}
	}
	printf("%c\n",f(t));
	for(i=0;i<m;i++){
        int q;
		q=strlen(name[i]);
		for(j=0;j<q;j++){
			if(name[i][j]==f(t))
				total++;
		}
	}
	printf("%d\n",total);
	for(i=0;i<m;i++){
        int p;
		p=strlen(name[i]);
		for(j=0;j<p;j++){
			if(name[i][j]==f(t))
				printf("%d\n",number[i]);
		}
	}
	return 0;
}
	
	char f(int y){
			char x;
			switch(y){
			case 0:x='A';break;
			case 1:x='B';break;
			case 2:x='C';break;
			case 3:x='D';break;
			case 4:x='E';break;
			case 5:x='F';break;
			case 6:x='G';break;
            case 7:x='H';break;
			case 8:x='I';break;
			case 9:x='J';break;
			case 10:x='K';break;
			case 11:x='L';break;
			case 12:x='M';break;
			case 13:x='N';break;
			case 14:x='O';break;
			case 15:x='P';break;
			case 16:x='Q';break;
			case 17:x='R';break;
            case 18:x='S';break;
			case 19:x='T';break;
			case 20:x='U';break;
			case 21:x='V';break;
			case 22:x='W';break;
			case 23:x='X';break;
			case 24:x='Y';break;
			case 25:x='Z';break;
			}
			return x;
		}
			


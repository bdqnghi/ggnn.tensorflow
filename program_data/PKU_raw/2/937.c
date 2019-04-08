
main(){
	int i, sum[26]={0}, m, j, max=0, p;
	struct book{
		int num;
		char au[27];
		int l;
	};
	struct book bk[1000];
	scanf("%d", &m);
	for(i=0; i<m; i++){
		scanf("%d %s", &bk[i].num, bk[i].au);
		bk[i].l=strlen(bk[i].au);
		for(j=0; j<bk[i].l; j++){
			switch(bk[i].au[j]){
			case 'A': sum[0]+=1; break;
			case 'B': sum[1]+=1; break;
			case 'C': sum[2]+=1; break;
			case 'D': sum[3]+=1; break;
			case 'E': sum[4]+=1; break;
			case 'F': sum[5]+=1; break;
			case 'G': sum[6]+=1; break;
			case 'H': sum[7]+=1; break;
			case 'I': sum[8]+=1; break;
			case 'J': sum[9]+=1; break;
			case 'K': sum[10]+=1; break;
			case 'L': sum[11]+=1; break;
			case 'M': sum[12]+=1; break;
			case 'N': sum[13]+=1; break;
			case 'O': sum[14]+=1; break;
			case 'P': sum[15]+=1; break;
			case 'Q': sum[16]+=1; break;
			case 'R': sum[17]+=1; break;
			case 'S': sum[18]+=1; break;
			case 'T': sum[19]+=1; break;
			case 'U': sum[20]+=1; break;
			case 'V': sum[21]+=1; break;
			case 'W': sum[22]+=1; break;
			case 'X': sum[23]+=1; break;
			case 'Y': sum[24]+=1; break;
			case 'Z': sum[25]+=1; break;
			}
		}
	}
	for(i=0; i<26; i++){
		if(sum[i]>max){
			max=sum[i];
			p=i;
		}
		else;
	}
	printf("%c\n%d", p+65, max);
	for(i=0; i<m; i++){
		for(j=0; j<bk[i].l; j++){
			if(bk[i].au[j]==p+65){
				printf("\n%d", bk[i].num);
				break;
			}
			else;
		}
	}
}
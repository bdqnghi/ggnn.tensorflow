int main(){
	char str[257],sub[257],rep[257];
	int i,r1,r2,r3,j,q,h=0,result=0;
	scanf("%s",str);
	scanf("%s",sub);
	scanf("%s",rep);
	r1=strlen(str);
	r2=strlen(sub);
	r3=strlen(rep);
    for(i=0;i<r1;i++){
		if(str[i]==sub[0]){
			for(j=0;j<r2;j++){
				if(str[i+j]!=sub[j])
					break;
			}
			if(j==r2){
				result=1;
				for(q=i;q<i+r3;q++){
					str[q+r3]=str[q+r2];
					str[q]=rep[h];
					h++;
				}
				printf("%s",str);
				break;
			}
		}

	}
	if(result==0)
		printf("%s",str);
	return 0;
}
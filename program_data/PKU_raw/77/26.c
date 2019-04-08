int main(){
	char boy,girl,s[520];
	int n,i,m,total,j;
	struct f{
		char c;
		int judge; 
	}child[520];
	scanf("%s",s);
	boy=s[0];
	for (i=1;s[i]!='\0';i++){
		if (s[i]!=boy){
			girl=s[i];
			break;
		}
	}
	for (i=0;s[i]!='\0';i++){
		child[i].c=s[i];
		child[i].judge=1;
	}
	m=i;
	total=i;
	for (n=1;m!=0;n++){
		for (i=0;i<total-2;i++){
			if (child[i].c==boy&&child[i].judge==1){
				for (j=i+1;j<=total-1;j++){
					if (child[j].judge==1&&child[j].c==boy)
						j=m+100;
					else if (child[j].judge==1&&child[j].c==girl){
						printf("%d %d\n",i,j);
						child[i].judge=0;
						child[j].judge=0;
						j=m+100;
						i=total+100;
						m=m-2;
					}
				}
			}
		}
	}
	return 0;
}


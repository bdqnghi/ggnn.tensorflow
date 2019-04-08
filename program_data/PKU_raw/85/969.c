int main()
{
	char s[max+1];
	int i,j,n,r=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s);
		for(j=0;s[j];j++){
			if(j==0){
				if((s[0]<='Z'&&s[0]>='A')||(s[0]<='z'&&s[0]>='a')||(s[0]=='_')){
					  r++;
			}else{
				printf("no\n");
				r=-1;
				break;
				}
			}else{
					if((j!=0&&s[j]<='9'&&s[j]>='0')||(j!=0&&s[j]<='Z'&&s[j]>='A')||(j!=0&&s[j]<='z'&&s[j]>='a')||(j!=0&&s[j]=='_')){
                    r++;
			}else{
				printf("no\n");
				r=-1;
				break;
			}
			}
		}
		if(r==j){printf("yes\n");}
			r=0;
	}

	return 0;
}
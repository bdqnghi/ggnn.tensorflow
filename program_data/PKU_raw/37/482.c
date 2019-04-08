void main(){
	char s[100000],c[26];
	int t;
	int i,num[26],j,u,count;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%s",s);
		j=0;
		count=0;      //count???????
		while(s[j]!='\0'){
			for(u=0;u<count;u++){
				if(s[j]==c[u]){
					num[u]++;
					j++;
					break;
				}
			}
			if(u==count){
				c[u]=s[j];
				num[u]=1;
				count++;
				j++;
			}
		}
		for(u=0;u<count;u++){
			if(num[u]==1){
				printf("%c\n",c[u]);
				break;
			}
		}
		if(u==count)
			printf("no\n");
	}
}

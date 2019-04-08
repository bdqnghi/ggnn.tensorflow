struct stu{
	int id;
	char author[26];
	int length;
}a[1000];

int main(){
	int n,i,k,num=0,max=0;
	char b,c;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%s",&a[i].id,a[i].author);
		a[i].length=strlen(a[i].author);
	}
	for(b='A';b<='Z';b++){
		num=0;
		for(i=0;i<n;i++){
			for(k=0;k<a[i].length;k++){
				if(a[i].author[k]==b){
					num++;
					break;
				}
			}
		}
		if(num>max){
			max=num;
			c=b;
		}
	}
	printf("%c\n%d\n",c,max);
	for(i=0;i<n;i++){
		for(k=0;k<a[i].length;k++){
			if(a[i].author[k]==c){
					printf("%d\n",a[i].id);
					break;
			}
		}
	}
	return 0;
}
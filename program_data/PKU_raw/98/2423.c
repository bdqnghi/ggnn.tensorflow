
struct sz{
	char word[41];
}*p;
int main(int argc, char* argv[])
{
	int n,i,m,add=0;
	scanf("%d",&n);
	p=(struct sz *)malloc(sizeof(struct sz)*n);
	for(i=0;i<n;i++){
		scanf("%s",&(p+i)->word);
	}
	for(i=0;i<n;i++){
		m=strlen((p+i)->word);
		if(add+m<80){
			if(add>0){
				printf(" ");
				add++;
			}
			printf("%s",(p+i)->word);
			add+=m;
		}
		else{
		printf("\n%s",(p+i)->word);
		add=m;
		}
	}
	return 0;
}

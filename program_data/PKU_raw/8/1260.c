
	int N1,N2,N3;
	int *p1=(int *)malloc(100*sizeof(int));
	int *p2=(int *)malloc(100*sizeof(int));
	int *p3=(int *)malloc(100*sizeof(int));
	
void inputnumbers(){

	scanf("%d %d\n",&N1,&N2);
	scanf("%d",p1);
	for(int i=1;i<=N1-1;i++){
		scanf(" %d",p1+i);
	}
	scanf("\n%d",p2);
	for(int i=1;i<=N2-1;i++){
		scanf(" %d",p2+i);
	}
}

void seperatesort(){
	for(int i=1;i<=N1-1;i++){
		for(int j=i+1;j<=N1;j++){
			if(*(p1+i-1)>*(p1+j-1))
			{
			int temp=*(p1+i-1);
			*(p1+i-1)=*(p1+j-1);
			*(p1+j-1)=temp;
			}
		}
	}
	for(int i=1;i<=N2-1;i++){
		for(int j=i+1;j<=N2;j++){
			if(*(p2+i-1)>*(p2+j-1))
			{
			int temp=*(p2+i-1);
			*(p2+i-1)=*(p2+j-1);
			*(p2+j-1)=temp;
			}
		}
	}
}

void combine(){
	N3=N1+N2;
	for(int i=0;i<=N1-1;i++){
		*(p3+i)=*(p1+i);
	}
	for(int i=0;i<=N2-1;i++){
		*(p3+N1+i)=*(p2+i);
	}
}

void printresult2(){
	printf("%d",*p3);
	for(int i=1;i<=N3-1;i++){
		printf(" %d",*(p3+i));
	}
}
void printresult1(){
	printf("%d",*p1);
	for(int i=1;i<=N1-1;i++){
		printf(" %d",*(p1+i));
	}
	for(int i=0;i<=N2-1;i++){
		printf(" %d",*(p2+i));
	}
}

int main(){
	inputnumbers();
	seperatesort();
	combine();
	printresult2();
}
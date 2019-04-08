
int main(int argc, char* argv[])
{
	int a,b;
	int shu[5];
	int i;
	scanf("%d",&a);
	b=a;


    int wei=0;
	do{
		a=a/10;
		wei++;
	}while(a!=0);
	
	for(i=0;i<wei;i++){
		shu[i]=b/pow(10,wei-1-i);
		b=b-shu[i]*pow(10,wei-1-i);
	}
    int sum=0;
	for(i=0;i<wei;i++){
		sum=sum+shu[i]*pow(10,i);
	}
	printf("\n%d",sum);
		


	return 0;
}


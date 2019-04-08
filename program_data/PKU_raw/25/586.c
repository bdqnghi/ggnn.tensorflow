int main()
{
	int n,i,N;
	double total;
	total=1.0;
    scanf("%d",&N);
    if(N==0){
             total=1;}
    if(N!=0){
    for(i=0;i<N;i++){
                     total*=2;
                     }
    }
    printf("%.0lf",total);                
	scanf("%d",&n);
	return 0;
}


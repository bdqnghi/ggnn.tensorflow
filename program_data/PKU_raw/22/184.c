
void main()
{
	int a[100]={0};
	int *p=a;
	int max=-1,max2=-1,i;

	do{
	scanf("%d",p++);
	}while( getchar() ==',' );
	for( i=0; i<p-a; i++){
		if(a[i]>max){
			max2=max;
			max=a[i];
		}
		else if( max2<a[i] && a[i]<max )
			max2=a[i];
	}
    if(max2==-1)
		printf("No");
	else
		printf("%d",max2);
}

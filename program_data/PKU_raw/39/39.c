
int main(){
    int n , i , p = 0 , sum = 0 , q;
	struct student{
		char name[200];
		int c1 , c2 , wx , wa;
		char bg , xb ;	
	}stu[101];
	scanf("%d" , &n);
	for( i = 0 ; i <= n - 1; i++){
		stu[i].wa = 0 ;
		scanf("%s %d %d %c %c %d", stu[i].name , &stu[i].c1 , &stu[i].c2 ,  &stu[i].bg , &stu[i].xb , &stu[i].wx);
//			printf("%s %d %d %c %c %d\n", stu[i].name , stu[i].c1 , stu[i].c2 ,  stu[i].bg , stu[i].xb , stu[i].wx);
		if( stu[i].c1 > 80 && stu[i].wx != 0 ) stu[i].wa = stu[i].wa + 8000 ;
		if( stu[i].c1 > 85 && stu[i].c2 > 80 ) stu[i].wa = stu[i].wa + 4000 ;
		if( stu[i].c1 > 90 ) stu[i].wa = stu[i].wa + 2000;
		if( stu[i].c1 > 85 && stu[i].xb == 'Y' ) stu[i].wa = stu[i].wa + 1000;
		if( stu[i].c2 > 80 && stu[i].bg == 'Y' ) stu[i].wa = stu[i].wa + 850 ;
		if( stu[i].wa > p ) {p = stu[i].wa ;q = i ;}
		sum = sum + stu[i].wa ;
//			printf("wa%d\n %d\n" , stu[i].wa , q);
	}
	printf("%s\n%d\n%d\n" , stu[q].name , stu[q].wa , sum);

    return(0);

}
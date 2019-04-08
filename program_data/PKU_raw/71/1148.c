
int main()
{
	int n, y, year, month1, month2, i, j, m;
	scanf ("%d",&n);
	for (j=0; j<n; j++){
		int total1=0, total2 =0;
		scanf("%d%d%d", &year, &month1, &month2);
		     for( i=1; i<month1; i++)
			 {
		         if ( i ==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
				 {
				     total1 = total1 +31;
				 }
		         if ( i ==4 || i==6 || i==9 || i==11)
				 {
				     total1 = total1 +30;
				 }
		        if ( i ==2)
				{
				     if( (year%4==0&&year%100!=0) || year%400==0 ){
				        total1 = total1 +29;
					 }
				     else {
					   total1 = total1 +28;
					 }
				}
			 }
	         for( m=1; m<month2; m++)
			 {
		         if ( m ==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
				 {
				     total2 = total2 +31;
				 }
		         if ( m ==4 || m==6 || m==9 || m==11)
				 {
				     total2 = total2 +30;
				 }
		         if ( m ==2)
				 {
				    if( (year%4==0&&year%100!=0) || year%400==0 ){
					     total2 = total2 +29;
					}
				    else{
					     total2 = total2 +28;
					}
				 }
			 }
			 y=total1-total2;
	         if (y%7==0){
		         printf ("YES\n");
			 }
		     else {
		     printf ("NO\n");
			 }
	}
	return 0;
}
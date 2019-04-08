
int main(int argc, char* argv[])
{
	int i, w, total[12], j;
	scanf("%d",&w);
	for(j=0; j<12; j++){
         total[j]=12;
	 for( i=1; i<=j; i++)
		{
		if ( i ==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
		{
				total[j] = total[j] +31;
		}
		if ( i ==4 || i==6 || i==9 || i==11)
		{
				total[j] = total[j] +30;
		}
		 if ( i ==2)
		{			
			total[j] = total[j] +28;
		}
	 }
     if(w<=5){
	    if(total[j]%7==(5-w)){
		 printf("%d\n",j+1);
		}
     }
	 if(w>5){
        if(total[j]%7==(12-w)){
		 printf("%d\n",j+1);
		}
	 }
	}
	return 0;
}


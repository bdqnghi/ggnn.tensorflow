int main()
{
	int b,y,m,d,w; 
         scanf("%d%d%d",&y,&m,&d);
         if(m==1){
         m=13;
         y--;}
         if(m==2){
         m=14;
         y--;}
	b=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400+1)%7;
        	if(b==1){
		printf("Mon.");
	}
	if(b==2){
		printf("Tue.");
	}
	if(b==3){
		printf("Wed.");
	}
	if(b==4){
		printf("Thu.");
	}
	if(b==5){
		printf("Fri.");
	}
	if(b==6){
		printf("Sat.");
	}
	if(b==0){
		printf("Sun.");
	}
return 0;
}



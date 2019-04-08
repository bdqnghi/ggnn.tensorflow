

int main(int argc, char* argv[])
{
	int i=0,j=0,k=0,w=0;
    scanf("%d",&w);
	for(i=1;i<=12;i++){
		if(i==1){
             j=j+(w+12);
			 k=j%7;
		     if(k==5)
			printf("%d\n",i);
		}
		if(i==3){
	       j=j+28;
		   k=j%7;
		   if(k==5)
			  printf("%d\n",i);
		}
		if(i==5||i==7||i==10||i==12){
            j=j+30;
			k=j%7;
		    if(k==5)
			   printf("%d\n",i);
		}
		if(i==2||i==4||i==6||i==8||i==9||i==11){
            j=31+j;
			k=j%7;
		    if(k==5)
			   printf("%d\n",i);
		}
	}
	return 0;
}
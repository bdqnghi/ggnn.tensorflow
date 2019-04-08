int main()
{
int n;
scanf("%d",&n);
printf("%d",n/100);
if((n%100)/10==9){
	printf("\n1\n2\n0");
}
	else if((n%100)/10==8){
		printf("\n1\n1\n1");
	}
		else if((n%100)/10==7){
        printf("\n1\n1\n0");
		}
        else if((n%100)/10==6){
       printf("\n1\n0\n1");
		}
		else if((n%100)/10==5){
printf("\n1\n0\n0");
		}
		else if((n%100)/10==4){
printf("\n0\n2\n0");
		}
		else if((n%100)/10==3){
printf("\n0\n1\n1");
		}
		else if((n%100)/10==2){
printf("\n0\n1\n0");
		}
else if((n%100)/10==1){
printf("\n0\n0\n1");
}
else{
printf("\n0\n0\n0");
}
if((n%10)>=5){
	printf("\n1\n%d",(n%10)-5);
}
	else{
		printf("\n0\n%d",(n%10));
	}
	return 0;
}


int main(int argc, char* argv[])
{   int n[10],b;
    scanf("%d",&n[10]);
	if(n[10]>=100){n[1]=n[10]/100;b=n[10]%100;}
	else{n[1]=0;}
	if(b>=50){n[2]=b/50;b=b%50;}
	else{n[2]=0;}
	if(b>=20){n[3]=b/20;b=b%20;}
	else{n[3]=0;}
	if(b>=10){n[4]=b/10;b=b%10;}
	else{n[4]=0;}
	if(b>=5){n[5]=b/5;b=b%5;}
	else{n[5]=0;}
	if(b>=1){n[6]=b/1;b=b%1;}
	else{n[6]=0;}
	printf("%d\n",n[1]);
    printf("%d\n",n[2]);
    printf("%d\n",n[3]);
    printf("%d\n",n[4]);
    printf("%d\n",n[5]);
    printf("%d\n",n[6]);
	return 0;
}


int main()
{
	int i,m=0,k=1;
	char a[501],b[501];
	double x,y;
	scanf("%lf",&x);
	scanf("%s",a);
	scanf("%s",b);
	if(strlen(a)!=strlen(b)){
		printf("error");
	}
	else
	{
		for(i=0;i<strlen(a);i++){
			if((a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T')||(b[i]!='A'&&b[i]!='G'&&b[i]!='C'&&b[i]!='T')){
				printf("error");
				k=0;
				break;
			}
			else if(a[i]==b[i]){
				m++;
			}    	
		}
		if(k){
          	y=1.0*m/strlen(a);
            if(y>x){
	            printf("yes");
            }else if(y<x||y==x){
               	printf("no");
            }
		}
	}
	return 0;
}
void main()
{
	int sy,sm,sd,ey,em,ed,i=0,j=0,m=0;
	long int n;
	scanf("%d %d %d\n%d %d %d",&sy,&sm,&sd,&ey,&em,&ed);
	n=-sd+ed;
	while(i<=sm-1){
	   switch(i){
	    case 0:n=n;break;
		case 1:n=n-31;break;
		case 2:n=n-30;break;
	    case 3:n=n-31;break;
		case 4:n=n-30;break;
		case 5:n=n-31;break;
		case 6:n=n-30;break;
		case 7:n=n-31;break;
		case 8:n=n-31;break;
        case 9:n=n-30;break;
		case 10:n=n-31;break;
		case 11:n=n-30;break;
	   }
	
		i=i+1;
	}
	if(((sy%4==0&&sy%100!=0)||(sy%400==0))&&sm>=3){
		n=n+1;
	}
	while(j<=em-1){
		switch(j){
		case 0:n=n;break;
		case 1:n=n+31;break;
		case 2:n=n+30;break;
	    case 3:n=n+31;break;
		case 4:n=n+30;break;
		case 5:n=n+31;break;
        case 6:n=n+30;break;
		case 7:n=n+31;break;
		case 8:n=n+31;break;
        case 9:n=n+30;break;
		case 10:n=n+31;break;
		case 11:n=n+30;break;
	   }
	
		j=j+1;
	}
	if(((ey%4==0&&ey%100!=0)||(ey%400==0))&&em>=3){
		n=n-1;
	}
	while(m+sy<=ey-1){
		if(((m+sy)%4==0&&(m+sy)%100!=0)||((m+sy)%400==0)){
			n=n+366;
		}
		else{
			n=n+365;
		}
		m=m+1;
	}
	printf("%ld\n",n);
}
	

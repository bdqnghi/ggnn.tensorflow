int main (){
	int y,m,d,i,n,total=0;	
	scanf ("%d%d%d",&y,&m,&d);
	if (y%400==0)
		y=y-(y/400-1)*400;
	else if (y/400>=1)
		y=y-y/400*400;
	int md[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	for (i=1;i<m;i++){
		total+=md[i-1];
	}
	for (i=1;i<y;i++){
		if (i%4==0&&i%100!=0||i%400==0)
			total+=366%7;
		else
            total+=365%7;
	}
	if (y%4==0&&y%100!=0||y%400==0){
		if (m>2)
			total+=1;
	}
    total+=d;
	n=total%7;
	switch (n){
	case 1:{printf ("Mon.");break;}
	case 2:{printf ("Tue.");break;}
	case 3:{printf ("Wed.");break;}
	case 4:{printf ("Thu.");break;}
	case 5:{printf ("Fri.");break;}
	case 6:{printf ("Sat.");break;}
	case 0:{printf ("Sun.");break;}
	}	
	return 0;
}




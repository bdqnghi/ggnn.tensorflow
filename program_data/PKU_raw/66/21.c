
int main(int argc, char* argv[])
{
	int y,m,d,i,j,k,n,y1;
	int a=-1;
	int mo,z;
	scanf("%d %d %d",&y,&m,&d);
	y1=(y%400);
	if(y1!=0){
    for(i=0;i<y1;i++){
		if(((i%4==0)&&(i%100!=0))||(i%400==0)){
			a++;
		}else a=a;
	}
	j=(366*a);
	k=365*(y1-a-1);
	if(((y1%4==0)&&(y1%100!=0))||(y1%400==0)){
		switch(m){
		case 1:mo=d;
			break;
		case 2:mo=31+d;
			break;
		case 3:mo=60+d;
			break;
		case 4:mo=91+d;
			break;
		case 5:mo=121+d;
			break;
		case 6:mo=152+d;
			break;
		case 7:mo=182+d;
			break;
		case 8:mo=213+d;
			break;
		case 9:mo=244+d;
			break;
		case 10:mo=274+d;
			break;
		case 11:mo=305+d;
			break;
		case 12:mo=335+d;
			break;
		}
		}else{	
			switch(m){
		case 1:mo=d;
			break;
		case 2:mo=31+d;
			break;
		case 3:mo=59+d;
			break;
		case 4:mo=90+d;
			break;
		case 5:mo=120+d;
			break;
		case 6:mo=151+d;
			break;
		case 7:mo=181+d;
			break;
		case 8:mo=212+d;
			break;
		case 9:mo=243+d;
			break;
		case 10:mo=273+d;
			break;
		case 11:mo=304+d;
			break;
		case 12:mo=334+d;
			break;
			}
		}
		n=mo+j+k-1;
		z=(n%7);
		switch(z){
		case 0:printf("Mon.");
			break;
		case 1:printf("Tue.");
			break;
		case 2:printf("Wed.");
			break;
		case 3:printf("Thu.");
			break;
		case 4:printf("Fri.");
			break;
		case 5:printf("Sat.");
			break;
		case 6:printf("Sun.");
			break;
		}
	}else{
        switch(m){
		case 1:mo=d;
			break;
		case 2:mo=31+d;
			break;
		case 3:mo=60+d;
			break;
		case 4:mo=91+d;
			break;
		case 5:mo=121+d;
			break;
		case 6:mo=152+d;
			break;
		case 7:mo=182+d;
			break;
		case 8:mo=213+d;
			break;
		case 9:mo=244+d;
			break;
		case 10:mo=274+d;
			break;
		case 11:mo=305+d;
			break;
		case 12:mo=335+d;
			break;
		}
		n=mo+4;
		z=(n%7);
        switch(z){
		case 0:printf("Mon.");
			break;
		case 1:printf("Tue.");
			break;
		case 2:printf("Wed.");
			break;
		case 3:printf("Thu.");
			break;
		case 4:printf("Fri.");
			break;
		case 5:printf("Sat.");
			break;
		case 6:printf("Sun.");
			break;
		}
	}
	return 0;
}


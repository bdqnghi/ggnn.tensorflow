
void main(){
	int n;
	double zxf=0,xfj=0,gpa;
	int i;
	struct lesson{
		int point;
		int score;
		double jd;
	}sub[10];
	scanf("%d",&n);	
	for(i=0;i<n;i++){
		scanf("%d",&sub[i].point);
	}
	for(i=0;i<n;i++){
		scanf("%d",&sub[i].score);
	}
	for(i=0;i<n;i++){
		switch(sub[i].score){
		case 100:
		case 99:
		case 98:
		case 97:
		case 96:
		case 95:
		case 94:
		case 93:
		case 92:
		case 91:
		case 90:
			sub[i].jd=4.0;
			break;
		case 89:
		case 88:
		case 87:
		case 86:
		case 85:
			sub[i].jd=3.7;
			break;
		case 84:
		case 83:
		case 82:
			sub[i].jd=3.3;
			break;
		case 81:
		case 80:
		case 79:
		case 78:
			sub[i].jd=3.0;
			break;
		case 77:
		case 76:
		case 75:
			sub[i].jd=2.7;
			break;
		case 74:
		case 73:
		case 72:
			sub[i].jd=2.3;
			break;
		case 71:
		case 70:
		case 69:
		case 68:
			sub[i].jd=2.0;
			break;
		case 67:
		case 66:
		case 65:
		case 64:
			sub[i].jd=1.5;
			break;
		case 63:
		case 62:
		case 61:
		case 60:
			sub[i].jd=1.0;
			break;
		default:
			sub[i].jd=0;
			break;
			
		}
	}
	for(i=0;i<n;i++){
		xfj+=sub[i].point*sub[i].jd;
		zxf+=sub[i].point;
	}
	gpa=xfj/zxf;
	printf("%.2lf\n",gpa);
}


int a[10000],b[10000];
double g[10000];
double GPA(int c);
void average(int n);
int main(){
	int n;
	scanf("%d",&n);
	for(int i1=0;i1<n;i1++){
		scanf("%d",&(b[i1]));
	}
    for(int i2=0;i2<n;i2++){
		scanf("%d",&(a[i2]));
	}
	for(int i3=0;i3<n;i3++){
		g[i3]=GPA(a[i3]);
	}
	average(n);
	return 0;
}

double GPA(int c){
	if(c>=90&&c<=100){return 4.0;}
	else if(c>=85&&c<=89){return 3.7;}
	else if(c>=82&&c<=84){return 3.3;}
	else if(c>=78&&c<=81){return 3.0;}
	else if(c>=75&&c<=77){return 2.7;}
	else if(c>=72&&c<=74){return 2.3;}
	else if(c>=68&&c<=71){return 2.0;}
	else if(c>=64&&c<=67){return 1.5;}
	else if(c>=60&&c<=63){return 1.0;}
	else if(c<60){return 0.0;}
}

void average(int n){
	double sum1=0,aver;
	int sum2=0;
	for(int i4=0;i4<n;i4++){
		sum1+=g[i4]*b[i4];
		sum2+=b[i4];
	}
	aver=sum1/sum2;
	printf("%.2lf\n",aver);
}
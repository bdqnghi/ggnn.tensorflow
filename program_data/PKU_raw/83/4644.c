int main(){
int n;
int xf[10];
int cj[10];
double G[10];
double a=4.0,b=3.7,c=3.3,d=3.0,e=2.7,f=2.3,g=2.0,h=1.5,i=1.0;
double GPA;
double sum=0;
double J=0;
double Z=0;
int z=0;
scanf("%d",&n);
for(int l=0;l<n;l++){
	scanf("%d",&(xf[l]));
}
for(int k=0;k<n;k++){
	scanf("%d",&(cj[k]));
	if(cj[k]>=90&&cj[k]<=100){G[k]=a;}
	else if(cj[k]>=85&&cj[k]<=89){G[k]=b;}
	else if(cj[k]>=82&&cj[k]<=84){G[k]=c;}
	else if(cj[k]>=78&&cj[k]<=81){G[k]=d;}
	else if(cj[k]>=75&&cj[k]<=77){G[k]=e;}
	else if(cj[k]>=72&&cj[k]<=74){G[k]=f;}
	else if(cj[k]>=68&&cj[k]<=71){G[k]=g;}	
	else if(cj[k]>=64&&cj[k]<=67){G[k]=h;}
	else if(cj[k]>=60&&cj[k]<=63){G[k]=i;}
	else if(cj[k]<60){G[k]=0;}
	}
for(int j=0;j<n;j++){
    J=1.0*G[j];
    z=xf[j];
	sum+=J*z;
	Z+=xf[j];
}

printf("%.2f",GPA=sum/Z);
return 0;
}
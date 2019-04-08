int main(){
int n,i;
scanf("%d",&n);
int b[n];
for(i=0;i<n;i++){
scanf("%d",&(b[i]));
}
double a,c,d,e,f,g,h,j;
a=0;
c=0;
d=0;
e=0;
for(i=0;i<n;i++){
	if(b[i]>0&&b[i]<=18){
		a++;
	}else if(b[i]>=19&&b[i]<=35){
		c++;
	}else if(b[i]>=36&&b[i]<=60){
		d++;
	}else if(b[i]>=61&&b[i]<=100){
		e++;
	}	
	}
f=100*a/n;
g=100*c/n;
h=100*d/n;
j=100*e/n;
printf("1-18: ");
printf("%.2lf",f);
printf("%%\n");
printf("19-35: ");
printf("%.2lf",g);
printf("%%\n");
printf("36-60: ");
printf("%.2lf",h);
printf("%%\n");
printf("Over60: ");
printf("%.2lf",j);
printf("%%");



return 0;

}
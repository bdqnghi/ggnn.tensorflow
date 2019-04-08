int main () {
int i,a,b,c,d,e,n;
a=0;b=0;c=0;d=0;e=0;
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d",&e);
	if(e<19){a++;}
	else if(e<36){b++;}
		else if(e<61){c++;}
		else {d++;}
}
double f,g,h,j;
f=a*1.0/n;
g=b*1.0/n;
h=c*1.0/n;
j=d*1.0/n;

printf("1-18: %.2lf",100*f);printf("%%\n");
printf("19-35: %.2lf",100*g);printf("%%\n");
printf("36-60: %.2lf",100*h);printf("%%\n");
printf("60??: %.2lf",100*j);printf("%%\n");


return 0;
}


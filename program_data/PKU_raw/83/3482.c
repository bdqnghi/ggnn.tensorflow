int main(){
double g;
int i,h,p;
p=0;
int a[10];
int b[10];
double c[10];
scanf ("%d",&h);
for (i=0;i<h;i++){
scanf ("%d",&(a[i]));}
for (i=0;i<h;i++){
scanf ("%d",&(b[i]));}
for (i=0;i<h;i++){
if (b[i]>=90) c[i]=4.0;
if ((b[i]>=85)&&(b[i]<90)) c[i]=3.7;
if ((b[i]>=82)&&(b[i]<85)) c[i]=3.3;
if ((b[i]>=78)&&(b[i]<82)) c[i]=3.0;
if ((b[i]>=75)&&(b[i]<78)) c[i]=2.7;
if ((b[i]>=72)&&(b[i]<75)) c[i]=2.3;
if ((b[i]>=68)&&(b[i]<72)) c[i]=2.0;
if ((b[i]>=64)&&(b[i]<68)) c[i]=1.5;
if ((b[i]>=60)&&(b[i]<64)) c[i]=1.0;
if (b[i]<60) c[i]=0;



}

for (i=0;i<h;i++){
	g=g+a[i]*c[i];
}
for (i=0;i<h;i++){
	p+=a[i];
}
g=g/p;
printf ("%.2lf",g);
return 0;
}


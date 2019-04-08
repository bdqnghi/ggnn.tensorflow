int main(){
double m,n,r;
int a,b,c;
int i,j;
char d1[600];
char d2[600];
scanf ("%lf",&m);
scanf ("%s",d1);
scanf ("%s",d2);
a=strlen(d1);
b=strlen(d2);
c=0;
if (a==b){
for (i=0;i<a;i++){
	if (((d1[i]!='A')&&(d1[i]!='T')&&(d1[i]!='C')&&(d1[i]!='G'))||((d2[i]!='A')&&(d2[i]!='T')&&(d2[i]!='C')&&(d2[i]!='G'))){
	printf ("error");
	return 0;
	}
	else{
	if (d1[i]==d2[i]){
		c++;
		}
	}
r=1.0*c/a;
}
if (r>m){
printf ("yes");}
else {printf ("no");
}}
else {printf ("error");}
return 0;
}



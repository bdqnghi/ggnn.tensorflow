int main(){
int p,q,i,j,k,n,a[100],b[100];
double c[100],GPA,m,r;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&(a[i]));
}
for(j=0;j<n;j++){
scanf("%d",&(b[j]));
}
for(k=0;k<n;k++){
	if((b[k])>=90&&b[k]<=100){
	c[k]=(double)(4.0)*(a[k]);
	}
	else if((b[k])>=85&&b[k]<=89){
	c[k]=(double)(3.7)*(a[k]);
	}
    else if((b[k])>=82&&b[k]<=84){
	c[k]=(double)(3.3)*(a[k]);
	}
	else if((b[k])>=78&&b[k]<=81){
	c[k]=(double)(3.0)*(a[k]);
	}
	else if((b[k])>=75&&b[k]<=77){
	c[k]=(double)(2.7)*(a[k]);
	}
	else if((b[k])>=72&&b[k]<=74){
	c[k]=(double)(2.3)*(a[k]);
	}
	else if((b[k])>=68&&b[k]<=71){
	c[k]=(double)(2.0)*(a[k]);
	}
	else if((b[k])>=64&&b[k]<=67){
	c[k]=(double)(1.5)*(a[k]);
	}
	else if((b[k])>=60&&b[k]<=63){
	c[k]=(double)(1.0)*(a[k]);
	}
	else if(b[k]<60){
	c[k]=(double)(0.0)*(a[k]);
	}
}
m=0;
for(p=0;p<n;p++){
m=m+c[p];
}
r=0;
for(q=0;q<n;q++){
r=r+a[q];
}
GPA=(double)m/r;
printf("%.2f",GPA);
return 0;
}

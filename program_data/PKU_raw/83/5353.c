int main(){
int sum=0;
int n,i,j;
scanf("%d\n",&n);
int a[10],b[10];
for(i=0;i<n;i++){
scanf("%d ",&a[i]);
}
for(i=0;i<n;i++){
sum+=a[i];
}
scanf("\n");
for(j=0;j<n;j++){
scanf("%d ",&b[j]);
}
double G,s=0;
for(j=0;j<n;j++){
if(b[j]<60){G=0;}
if(b[j]>=60&&b[j]<=63){G=1.0;}
if(b[j]>=64&&b[j]<=67){G=1.5;}
if(b[j]>=68&&b[j]<=71){G=2.0;}
if(b[j]>=72&&b[j]<=74){G=2.3;}
if(b[j]>=75&&b[j]<=77){G=2.7;}
if(b[j]>=78&&b[j]<=81){G=3.0;}
if(b[j]>=82&&b[j]<=84){G=3.3;}
if(b[j]>=85&&b[j]<=89){G=3.7;}
if(b[j]>=90&&b[j]<=100){G=4.0;}
G=G*a[j];
s+=G;
}
double GPA;
GPA=s/sum;
printf("%.2f",GPA);
return 0;
}
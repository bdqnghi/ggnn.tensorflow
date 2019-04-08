int i,num,p;
float x[10],y[10];
double dis,temp;
int main(){
scanf("%d",&num);
dis=0;
for (i=1;i<=num;i++){
	scanf("%f%f",&x[i],&y[i]);
}
for (p=1;p<=num;p++){
	for (i=num;i>0;i--){
		temp=pow((x[p]-x[i])*(x[p]-x[i])+(y[p]-y[i])*(y[p]-y[i]),0.5);
		if (temp>=dis)
		{
		dis=temp;
		}
	}
}
printf("%.4f\n", dis);
return 0;
}
	
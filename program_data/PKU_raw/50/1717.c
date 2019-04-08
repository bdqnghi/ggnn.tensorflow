
int main (){
int w,m[13];
scanf ("%d",&w);
m[1]=w-2;
m[2]=m[3]=w+1;
m[4]=m[7]=w-3;
m[5]=w-1;
m[6]=w-5;
m[8]=w;
m[9]=m[12]=w-4;
m[10]=w-2;
m[11]=w+1;
int i;
for (i=1;i<13;i++){
	if (m[i]<=0){
	m[i]+=7;}
	else if (m[i]>7){
	m[i]-=7;
	}
}
for (i=1;i<13;i++){
	if (m[i]==5){
	printf ("%d\n",i);
	}

}

return 0;
}


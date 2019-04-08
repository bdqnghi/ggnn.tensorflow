int main(){
char a[31];
cin.getline(a,31);
int d,i;
d=strlen(a);
int b[100];
memset(b,-1,sizeof(b));
int num=0;
int sum=0;
for(i=0;i<d;i++){
	if((a[i]<58)&&(a[i]>47)){
		sum=sum*10+(int)(a[i]-48);
		b[num]=sum;
	}
	else {
		num++;
		sum=0;
	}
}
for(i=0;i<100;i++){
	if(b[i]>=0){
	cout<<b[i]<<endl;}
	else continue;
}
return 0;}
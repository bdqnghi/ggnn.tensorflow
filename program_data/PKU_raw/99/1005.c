int main(){
int n,a,b,c,d,i;
a=0;
b=0;
c=0;
d=0;
int sz[100];
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&sz[i]);
}
for(i=0;i<n;i++){
    if(sz[i]<=18){
		a++;
	}else if(sz[i]>18&&sz[i]<=35){
		b++;
	}else if(sz[i]>35&&sz[i]<=60){
		c++;
	}else{
		d++;
	}
}
printf("1-18: %.2lf%%\n",(1.0*a/n*100));
printf("19-35: %.2lf%%\n",(1.0*b/n*100));
printf("36-60: %.2lf%%\n",(1.0*c/n*100));
printf("60??: %.2lf%%\n",(1.0*d/n*100));
    return 0;
}



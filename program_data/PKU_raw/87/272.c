int main(){
int a[100],b[100],c[100],d[100],e[100],f[100];
double m[100]={0};
int i=0,k=0;

for(i=0;i>-1;i++){
scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
if(a[i]==0){
	break;
}
}

for(k=0;k<i;k++){
m[k]=((d[k]+12-a[k]-1)*60*60)+(e[k]+60-1-b[k])*60+f[k]+60-c[k];

}

for(k=0;k<i;k++){
   printf("%.0lf\n",m[k]);
}

return 0;
}


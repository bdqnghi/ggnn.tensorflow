int main(){
int n,u[1000],i,a1,a2,a,j;
scanf("%d",&n);
for(i=0;i<n;i++){scanf("%d",&u[i]);}
for(i=0;i<n;i++){a1=1;a2=1;
for(j=1;j<=u[i];j++){if(j==1||j==2){a=1;}
else{a=a1+a2;a1=a2;a2=a;}
}printf("%d\n",a);
}
return 0;
}
int main(){
int sz[10],sz1[6]={100,50,20,10,5,1};
int a,i;
scanf("%d",&a);
for(i=0;i<6;i++){
printf("%d\n",a/sz1[i]);
a=a%sz1[i];
}
return 0;
}
int main()
{
int n,s[1000],z[1000],i,j;
double a[1000];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&s[i],&z[i]);
a[i]=100.0*z[i]/s[i];
}
for(j=1;j<n;j++){
if(a[j]-a[0]+5>10)
printf("better\n");
 else if (a[j]-a[0]+5<0){
printf("worse\n");
}
else 
printf("same\n");
}
return 0;
}




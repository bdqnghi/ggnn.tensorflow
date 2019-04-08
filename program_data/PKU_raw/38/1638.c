int main ()
{
int k,n[100],i,j;
double s[100][100],total,result,sum,x;
scanf("%d",&k);
for(i=0;i<k;i++){
scanf("%d",&n[i]);
for(j=0;j<n[i];j++)
scanf("%lf",&s[i][j]);
}
for(int l=0;l<k;l++){
sum=0;
total=0;
for(j=0;j<n[l];j++){
sum+=(s[l][j]/(n[l]));
}
x=sum;
for(j=0;j<n[l];j++){
total+=((s[l][j]-x)*(s[l][j]-x));
}
result=sqrt(total/n[l]);
printf("%.5f\n",result);

}
return 0;
}

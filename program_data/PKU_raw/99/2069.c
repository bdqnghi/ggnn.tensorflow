int k[100];
int main(){
int n,i;
double as,bs,cs,ds,sum;
as=0;
bs=0;
cs=0;
ds=0;
sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
	scanf("%d",&k[i]);
for(i=0;i<n;i++){
if(k[i]<=18)	as++;
if(k[i]>18&&k[i]<36)	bs++;
if(k[i]>35&&k[i]<61)	cs++;
if(k[i]>60)	ds++;

}
sum=n;

printf("1-18: %.2lf%%\n",as*100.0/sum);
printf("19-35: %.2lf%%\n",bs*100.0/sum);
printf("36-60: %.2lf%%\n",cs*100.0/sum);
printf("60??: %.2lf%%\n",ds*100.0/sum);

return 0;

}
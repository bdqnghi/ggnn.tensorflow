int main ()
{
     int i,n;
     int a=0,b=0,c=0,d=0;
    int age[100];
    double m,o,p,q;
     scanf("%d",&n);
     for(i=0;i<n;i++){
    scanf("%d",&age[i] ) ;
   if(age[i]<=18&&age[i]>=1) 
    a=a+1;
    else if(age[i]<=35&&age[i]>=19)
    b=b+1;
   else if(age[i]<=60&&age[i]>=36)
    c=c+1;
  else if(age[i]>60)
	  d=d+1; }
m=1.0 *a/n*100;
o=1.0 *b/n*100;
p=1.0 *c/n*100;
q=1.0 *d/n*100;
printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%",m,o,p,q);
  return 0;
}

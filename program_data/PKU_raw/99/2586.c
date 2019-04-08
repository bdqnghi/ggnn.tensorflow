
double main ()
 {
float d,b,c,f,q=0,w=0,e=0,r=0;
int n,i,a[100];
scanf("%d", &n);
for(i=0;i<n;i++){
	scanf("%d", &a[i]);

	if(a[i]<=18)
	q=q+1;
else if(a[i]<=35)
w=w+1;
else if(a[i]<=60)
e=e+1;
else r=r+1;
}

b=q*100/n;
c=w*100/n;
d=e*100/n;
f=r*100/n;

printf("1-18: %.2f",b);
printf("%%");
printf("\n");

printf("19-35: %.2f",c);
printf("%%");
printf("\n");

printf("36-60: %.2f",d);
printf("%%");
printf("\n");

printf("60??: %.2f",f);
printf("%%");
printf("\n");
}

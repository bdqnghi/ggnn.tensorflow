main()
{
int a,b,e;
scanf ("%d",&a);if (a==1) {printf ("End");goto loop_copperhead;}
loop_cobra:
e=a-(int)(a/2)*2;
if (e==0) {printf ("%d/2=%d\n",a,a/2); a=a/2;}
else {b=a*3+1;printf("%d*3+1=%d\n",a,b);a=b;}
if (a!=1) goto loop_cobra; else printf ("End");
loop_copperhead:
return 0;
}
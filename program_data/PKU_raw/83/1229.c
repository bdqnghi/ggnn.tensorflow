main()
{int a,n,i;
 float sum,f[10],b=0;
 sum=0;
 scanf("%d",&n);
 for(i=0;i<=n-1;i++)
 {scanf("%f",&f[i]);b+=f[i];}
 for(i=0;i<=n-1;i++)
 {scanf("%d",&a);
  if(a>=90&&a<=100){sum+=f[i]*4.0;continue;}
  if(a>=85&&a<=89) {sum+=f[i]*3.7;continue;}
  if(a>=82&&a<=84) {sum+=f[i]*3.3;continue;}
  if(a>=78&&a<=81) {sum+=f[i]*3.0;continue;}
  if(a>=75&&a<=77) {sum+=f[i]*2.7;continue;}
  if(a>=72&&a<=74) {sum+=f[i]*2.3;continue;}
  if(a>=68&&a<=71) {sum+=f[i]*2.0;continue;}
  if(a>=64&&a<=67) {sum+=f[i]*1.5;continue;}
  if(a>=60&&a<=63) {sum+=f[i]*1.0;continue;}
 }
 printf("%.2f",sum/b);

}
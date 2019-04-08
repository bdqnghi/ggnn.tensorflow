int main()
{int i,n,age;
double sum1=0.00,sum2=0.00,sum3=0.00,sum4=0.00;
double k1,k2,k3,k4;
scanf("%d",&n);
for(i=1;i<=n;i++){
 scanf("%d",&age);
 if(age>=1&&age<=18) sum1=sum1+1;
 else if(age<=35) sum2=sum2+1;
 else if(age<=60) sum3=sum3+1;
 else sum4=sum4+1;
}
 k1 = (double)(sum1/n*100);
 k2 = (double)(sum2/n*100);
 k3 = (double)(sum3/n*100);
 k4 = (double)(sum4/n*100);
printf("1-18: %.2lf%\n",k1);
printf("19-35: %.2lf%\n",k2);
printf("36-60: %.2lf%\n",k3);
printf("60??: %.2lf%\n",k4);
return 0;
}

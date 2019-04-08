void main()
{int n,i,sum2=0,b[100]; 
 float c[100],a[100],GPA,sum1=0;
 scanf("%d",&n);
for(i=0;i<=(n-1);i++)
scanf("%f",&a[i]);
for(i=0;i<=(n-1);i++)
scanf("%d",&b[i]);
for(i=0;i<=(n-1);i++)
{if(b[i]>=90) c[i]=4.0*a[i];
else {if(b[i]>=85) c[i]=3.7*a[i];
else {if(b[i]>=82) c[i]=3.3*a[i];
else {if(b[i]>=78) c[i]=3.0*a[i];
else {if(b[i]>=75) c[i]=2.7*a[i];
else {if(b[i]>=72) c[i]=2.3*a[i];
else {if(b[i]>=68) c[i]=2.0*a[i];
else {if(b[i]>=64) c[i]=1.5*a[i];
else {if(b[i]>=60) c[i]=1.0*a[i];
  else c[i]=0;
}
}
}
}
}
}
}
}
}
for(i=0;i<=(n-1);i++)
sum1=sum1+c[i];
for(i=0;i<=(n-1);i++)
sum2=sum2+a[i];
GPA=sum1/sum2;
printf("%.2f",GPA);
}

int main()  {
int i,n,t=0,m=0,k;
double c[40],d[40];
double l;

struct{
     char z[10];
     double b;
}  a[40];

  scanf("%d",&n);
  for(i=0;i<n;i++){
	  scanf("%s %lf",a[i].z,&a[i].b);
  }

  for(i=0;i<n;i++){
	  if(a[i].z[0]=='m')  {c[t]=a[i].b;t++;}
      else if(a[i].z[0]=='f')    {d[m]=a[i].b;m++;}
  }
  
  for(i=0;i<t;i++){
	  for(k=0;k<t-1;k++){
          if(c[k]>c[k+1])   {l=c[k+1];c[k+1]=c[k];c[k]=l;}
	  }
  }
printf("%.2lf",c[0]);
for(i=1;i<t;i++){
    printf(" %.2lf",c[i]);
}

for(i=0;i<m;i++){
	for(k=0;k<m-1;k++){
		if(d[k]<d[k+1])  {l=d[k];d[k]=d[k+1];d[k+1]=l;}
	}
}
for(k=0;k<m;k++){
	printf(" %.2lf",d[k]);
}
return 0;
}
int main(){
   int n,i,j,k,t,p;
   int a[50000][2];
    t=0;
    p=20000;
  scanf("%d",&n);
  for(i=0;i<n;i++){
	  for(j=0;j<2;j++){
		  scanf("%d",&a[i][j]);
	  }
  }
  for(i=0;i<n;i++){
	  for(j=0;j<2;j++){
        if(t<a[i][j])  {t=a[i][j];}
		if(p>a[i][j])  {p=a[i][j];}
	  }
  }

   for(k=0;k<n;k++){
	  for(i=0;i<n-1;i++){
		  if(a[0][0]<=a[i+1][0]&&a[i+1][0]<=a[0][1]&&a[0][1]<=a[i+1][1])
		  {a[0][0]=a[0][0];
		  a[0][1]=a[i+1][1];
		  continue;}
             if(a[0][0]<=a[i+1][0]&&a[i+1][1]<=a[0][1])
			 {a[0][0]=a[0][0];
			 a[0][1]=a[0][1];
			 continue;}
                 if(a[i+1][0]<=a[0][0]&&a[0][1]<=a[i+1][1])
				 {a[0][0]=a[i+1][0];
				 a[0][1]=a[i+1][1];
				 continue;}
                    if(a[i+1][0]<=a[0][0]&&a[0][0]<=a[i+1][1]&&a[i+1][1]<=a[0][1])
					{a[0][0]=a[i+1][0];
					a[0][1]=a[0][1];
					continue;}
	  }
  }
if(a[0][0]==p&&a[0][1]==t)
{printf("%d %d",a[0][0],a[0][1]);}
else {printf("no\n");}
return 0;
}

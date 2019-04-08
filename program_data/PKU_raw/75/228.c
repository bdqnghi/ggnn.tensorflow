int main() 
{
int a[1010]={0};
int b[1010]={0};
int d[1010]={0};
int max1=2000,max2=0,max=0;
int  t;
int i,n=0;
char c;
for(i=1;;i++){
              scanf("%d%c",&a[i],&c);
              n++;
              if(c!=','){break;}
              }
for(i=1;;i++){
              scanf("%d%c",&b[i],&c);
              if(c!=','){break;}
              }
for(i=1;i<=n;i++){
                  if(a[i]<max1){max1=a[i];}
                  }
for(i=1;i<=n;i++){
                  if(b[i]>max2){max2=b[i];}
                  }
for(t=max1;t<max2;t=t+1){
      for(i=1;i<=n;i++){
            if(a[i]<=t&&b[i]>t){
                                d[t]++;
                                }
            }
      }
for(i=1;i<=max2-max1;i++){
                  if(d[i]>max){max=d[i];}
                  }
printf("%d %d\n",n,max);
	
	return 0;
}

int toup (int m)
{int l;l=m/2;return l;}


int main(){int i,j;
int a[300],b[300],ac=0,bc=0,xun,h;
scanf("%d%d",&i,&j);

a[0]=i;b[0]=j;
for(xun=1;;xun++){if(a[xun-1]!=1){a[xun]=toup(a[xun-1]);ac=ac+1;}else{break;}                   }
for(xun=1;;xun++){if(b[xun-1]!=1){b[xun]=toup(b[xun-1]);bc=bc+1;}else{break;}                   }

for(h=1;;h++){if(a[ac-h]!=b[bc-h]){ printf("%d",a[ac-h+1]);break;}        }
return 0;}
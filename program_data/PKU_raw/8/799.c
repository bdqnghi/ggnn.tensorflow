int a[100],b[100],c[200],i,j,la,lb,p;
void main()
{void canf();
void px();
void lj();
void rintf();
canf();px();lj();rintf();
}

void canf()
{scanf("%d%d",&la,&lb);
for(i=0;i<=la-1;i++) scanf("%d",&a[i]);
for(i=0;i<=lb-1;i++) scanf("%d",&b[i]);
}

void px()
{for(i=0;i<=la-2;i++){for(j=i+1;j<=la-1;j++) if(a[j]<a[i]){p=a[i];a[i]=a[j];a[j]=p;}}
for(i=0;i<=lb-2;i++){for(j=i+1;j<=lb-1;j++) if(b[j]<b[i]){p=b[i];b[i]=b[j];b[j]=p;}}
}

void lj()
{for(i=0;i<=la-1;i++) c[i]=a[i];
for(i=la;i<=la+lb-1;i++) c[i]=b[i-la];
}

void rintf()
{printf("%d",c[0]);for(i=1;i<=la+lb-1;i++)printf(" %d",c[i]);printf("\n");
}

int main()
{
int w,a[12],i,b[12];
scanf("%d",&w);
if(w<3) w=w+5;
else w=w-2;
    a[0]=7;
a[1]=a[3]=a[5]=a[7]=a[8]=a[10]=31;
    a[4]=a[6]=a[9]=a[11]=30;
a[2]=28;
for(i=2;i<=11;i++){
     a[i]+=a[i-1];
}

     for(i=0;i<=11;i++){
     if(a[i]%7+w==5||a[i]%7+w==12)
b[i]=i+1;
else b[i]=0;

}
for(i=0;i<=11;i++){
if(b[i]!=0)
printf("%d\n",b[i]);
}
return 0;
}

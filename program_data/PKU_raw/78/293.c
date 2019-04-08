main()
{
int a[4]={0};
char b[4]={0};
int zi,qi,si,li,i;
int z,q,s,l;

for(a[0] = 10;a[0]<51;a[0]=a[0]+10)
for(a[1] = a[0]+10;a[1]<51;a[1]=a[1]+10)
for(a[2] = a[1]+10;a[2]<51;a[2]=a[2]+10)
for(a[3] = a[2]+10;a[3]<51;a[3]=a[3]+10)
{
for(zi=0;zi<4;zi++)
for(qi=0;qi<4;qi++)
for(si=0;si<4;si++)
for(li=0;li<4;li++)
{
if( (a[zi]+a[qi])==(a[si]+a[li]) && a[zi]+a[li]>a[si]+a[qi] && a[zi]+a[si]<a[qi] )
{
b[zi]='z';
b[qi]='q';
b[si]='s';
b[li]='l';

for(i=3;i>=0;i--)
{
printf("%c %d\n",b[i],a[i]);
}

}

}


}



}
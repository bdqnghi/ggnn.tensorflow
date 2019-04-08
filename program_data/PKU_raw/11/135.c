int main(){
int y,m,d;
int f[22];
scanf ("%d %d %d",&y,&m,&d);
f[0]=31+d;
f[1]=60+d;
f[2]=91+d;
f[3]=121+d;
f[4]=152+d;
f[5]=182+d;
f[6]=213+d;
f[7]=244+d;
f[8]=274+d;
f[9]=305+d;
f[10]=335+d;
f[11]=31+d;
f[12]=59+d;
f[13]=90+d;
f[14]=120+d;
f[15]=151+d;
f[16]=181+d;
f[17]=212+d;
f[18]=243+d;
f[19]=273+d;
f[20]=304+d;
f[21]=334+d;
if((y%4==0&&y%100!=0)||y%400==0)
{switch(m){
case 1:printf("%d",d);break;
case 2:printf("%d",f[0]);break;
case 3:printf("%d",f[1]);break;
case 4:printf("%d",f[2]);break;
case 5:printf("%d",f[3]);break;
case 6:printf("%d",f[4]);break;
case 7:printf("%d",f[5]);break;
case 8:printf("%d",f[6]);break;
case 9:printf("%d",f[7]);break;
case 10:printf("%d",f[8]);break;
case 11:printf("%d",f[9]);break;
case 12:printf("%d",f[10]);break;}}
else
{switch(m){
case 1:printf("%d",d);break;
case 2:printf("%d",f[11]);break;
case 3:printf("%d",f[12]);break;
case 4:printf("%d",f[13]);break;
case 5:printf("%d",f[14]);break;
case 6:printf("%d",f[15]);break;
case 7:printf("%d",f[16]);break;
case 8:printf("%d",f[17]);break;
case 9:printf("%d",f[18]);break;
case 10:printf("%d",f[19]);break;
case 11:printf("%d",f[20]);break;
case 12:printf("%d",f[21]);break;}}
return 0;}

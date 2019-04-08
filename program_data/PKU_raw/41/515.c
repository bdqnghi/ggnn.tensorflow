main(){
int a,b,c,d,e,i;
i=0;
for(a=1;a<=5;a++){
for(b=1;b<=5;b++){
while(b==a)
b++;
if(b>=5)
break;
for(c=1;c<=5;c++){
while(c==a||c==b)
c++;
if(c>=5)
break;
for(d=1;d<=5;d++){
while(d==a||d==c||d==b)
d++;
if(d>=5)
break;
for(e=1;e<=5;e++){
while(d==e||e==b||e==a||e==c)
e++;
if(e>=5)
break;
if(e!=2&&e!=3&&(a==1||a==2)&&e==1&&(b==1||b==2)&&e==2){
printf("%d %d %d %d %d",a,b,c,d,e);
break;
}
if(e!=2&&e!=3&&(a==1||a==2)&&(c==1||c==2)&&a==5&&e==1){
printf("%d %d %d %d %d",a,b,c,d,e);i=1;
break;}
if(e!=2&&e!=3&&(a==1||a==2)&&(d==1||d==2)&&a!=5&&e==1){
printf("%d %d %d %d %d",a,b,c,d,e);i=1;
break;}
if(e!=2&&e!=3&&(a==1||a==2)&&(e==1||e==2)&&d==1&&e==1){
printf("%d %d %d %d %d",a,b,c,d,e);i=1;
break;}
if(e!=2&&e!=3&&(b==1||b==2)&&(c==1||c==2)&&b==2&&a==5){
printf("%d %d %d %d %d",a,b,c,d,e);i=1;
break;}
if(e!=2&&e!=3&&(d==1||d==2)&&(b==1||b==2)&&c!=1&&b==2){
printf("%d %d %d %d %d",a,b,c,d,e);i=1;
break;}
if(e!=2&&e!=3&&(b==1||b==2)&&(e==2||e==1)&&d==1&&b==2){
printf("%d %d %d %d %d",a,b,c,d,e);i=1;
break;}
if(e!=2&&e!=3&&(c==1||c==2)&&(d==2||d==1)&&a==5&&c!=1){
printf("%d %d %d %d %d",a,b,c,d,e);i=1;
break;}
if(e!=2&&e!=3&&(c==1||c==2)&&(e==2||e==1)&&a==5&&d==1){
printf("%d %d %d %d %d",a,b,c,d,e);i=1;
break;}
if(e!=2&&e!=3&&(d==1||d==2)&&(e==2||e==1)&&c!=1&&d==1){
printf("%d %d %d %d %d",a,b,c,d,e);i=1;
break;}if(i==1) break;
}if(i==1) break;
}if(i==1) break;
}if(i==1) break;
}if(i==1) break;
}
}



int main(){
int j,i,a,b,c,d,e,f,s[1000];
i=0;
do{
scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
d=d+12;
if(f<c){f=f+60;e=e-1;}
if(e<b){e=e+60;d=d-1;}
s[i]=(d-a)*3600+(e-b)*60+f-c;
i++;
}while(a!=0);
for(j=0;j<i-1;j++){printf("%d\n",s[j]);}
return 0;

}
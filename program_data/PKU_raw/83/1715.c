int main(){
int n,i;
scanf("%d",&n);
int score[10];
int grade[10];
int a=0;
int b=0;
double c=0;
double d=0;
for(i=0;i<n;i++){
	scanf("%d",&score[i]);
	a+=score[i];
}
for(i=0;i<n;i++){
	scanf("%d",&grade[i]);
if(90<=grade[i]){c+=score[i]*4.0;}
else if(85<=grade[i]){c+=score[i]*3.7;}
else if(82<=grade[i]){c+=score[i]*3.3;}
else if(78<=grade[i]){c+=score[i]*3.0;}
else if(75<=grade[i]){c+=score[i]*2.7;}
else if(72<=grade[i]){c+=score[i]*2.3;}
else if(68<=grade[i]){c+=score[i]*2.0;}
else if(64<=grade[i]){c+=score[i]*1.5;}
else if(60<=grade[i]){c+=score[i]*1.0;}
else{c+=score[i]*0;}
}

d=c/a;

printf("%.2lf",d);
return 0;
}
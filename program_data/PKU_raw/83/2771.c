
void main(){
int xf[10],n,s,i;
double gpa;
double sumxuefen,sumxuefenjidian;
sumxuefen=0;
sumxuefenjidian=0;
gpa=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&xf[i]);
sumxuefen+=xf[i];
}
for(i=0;i<n;i++){
scanf("%d",&s);
if(s>=90&&s<=100)sumxuefenjidian+=4*xf[i];
if(s>=85&&s<=89)sumxuefenjidian+=3.7*xf[i];
if(s>=82&&s<=84)sumxuefenjidian+=3.3*xf[i];
if(s>=78&&s<=81)sumxuefenjidian+=3.0*xf[i];
if(s>=75&&s<=77)sumxuefenjidian+=2.7*xf[i];
if(s>=72&&s<=74)sumxuefenjidian+=2.3*xf[i];
if(s>=68&&s<=71)sumxuefenjidian+=2.0*xf[i];
if(s>=64&&s<=67)sumxuefenjidian+=1.5*xf[i];
if(s>=60&&s<=63)sumxuefenjidian+=1.0*xf[i];
if(s<=59)sumxuefenjidian+=0*xf[i];
}
gpa=sumxuefenjidian/sumxuefen;
printf("%.2lf",gpa);
}
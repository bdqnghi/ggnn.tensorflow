int main()
{
int n,shijifen[10],xuefen[10],i,xuefenzhihe;
double ymxf[10],jidian[10],jidianzhihe,GPA;
scanf("%d\n",&n);
xuefenzhihe=0;
for (i=0;i<n;i++){
scanf("%d",&xuefen[i]);
xuefenzhihe=xuefenzhihe+xuefen[i];
}
for (i=0;i<n;i++){
scanf("%d",&shijifen[i]);
if(shijifen[i]<60){
jidian[i]=0;}else if(shijifen[i]>=60&&shijifen[i]<=63){
jidian[i]=1.0;}else if(shijifen[i]>=64&&shijifen[i]<=67){
jidian[i]=1.5;}else if(shijifen[i]>=68&&shijifen[i]<=71){
jidian[i]=2.0;}else if(shijifen[i]>=72&&shijifen[i]<=74){
jidian[i]=2.3;}else if(shijifen[i]>=75&&shijifen[i]<=77){
jidian[i]=2.7;}else if(shijifen[i]>=78&&shijifen[i]<=81){
jidian[i]=3.0;}else if(shijifen[i]>=82&&shijifen[i]<=84){
jidian[i]=3.3;}else if(shijifen[i]>=85&&shijifen[i]<=89){
jidian[i]=3.7;}else{
jidian[i]=4.0;}
}
jidianzhihe=0;
for (i=0;i<n;i++){
jidianzhihe=jidianzhihe+jidian[i]*xuefen[i];
}
GPA=jidianzhihe/xuefenzhihe;
printf("%.2lf",GPA);
return 0;
}

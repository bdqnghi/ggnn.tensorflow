int main() {
int n, i;
scanf("%d",&n);
int sz1[n];
int sz2[n];
for(i=0; i<n; i++) {
  scanf("%d",&sz1[i]);
  }
for(i=0; i<n; i++) {
  scanf("%d",&sz2[i]);
  }
float score1[n];
for(i=0; i<n; i++) {
  if (sz2[i]>=90 && sz2[i]<=100) {
    score1[i]=4.00; }
  else if (sz2[i]>=85 && sz2[i]<=89) {
    score1[i]=3.70; }
  else if (sz2[i]>=82 && sz2[i]<=84) {
    score1[i]=3.30; }
  else if (sz2[i]>=78 && sz2[i]<=81) {
    score1[i]=3.00; }
  else if (sz2[i]>=75 && sz2[i]<=77) {
    score1[i]=2.70; }
  else if (sz2[i]>=72 && sz2[i]<=74) {
    score1[i]=2.30; }
  else if (sz2[i]>=68 && sz2[i]<=71) {
    score1[i]=2.00; }
  else if (sz2[i]>=64 && sz2[i]<=67) {
    score1[i]=1.50; }
  else if (sz2[i]>=60 && sz2[i]<=63) {
    score1[i]=1.00; }
  else if (sz2[i]<=60) {
    score1[i]=0.00; }
  }
float score2[n];
for(i=0; i<n; i++) {
  score2[i]=score1[i]*sz1[i];
  }
float sum1=0.00;
float sum2=0.00;
for(i=0; i<n; i++) {
  sum1=sum1+score2[i];
  }
for(i=0; i<n; i++) {
  sum2=sum2+sz1[i];
  }
float GPA;
GPA = sum1/sum2;
printf("%.2f",GPA);
return 0;
}

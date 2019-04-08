int main()
{
 int A,B,C,D,word,weight;
 char rank[6];
for(int j=0;j<6;j++)
 rank[j]='0';
for(A = 1; A<= 5; A++) 
{
 for(B = 1; B<= 5; B++) 
{
 if(A == B) continue;
  for(C = 1; C<= 5; C++)
  {
  if(A == C || B == C) continue;
  for(D =1; D<= 5; D++) 
   {
    if(A == D || B == D || C == D) continue;
   word=((A+B)==(C+D))+((A+D)>(C+B))+((A+C)<B);
  if(word==3)
 {rank[A]='z';
  rank[B]='q';
  rank[C]='s';
  rank[D]='l';
 for(int j=5;j>0;j--)
  {
    if(rank[j]=='0') continue;
     else
      {cout<<rank[j]<<" ";
       weight=j*10;
       cout<<weight<<endl;}
  }}}}}}
return 0;
}
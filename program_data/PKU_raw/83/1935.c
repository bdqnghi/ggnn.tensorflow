int main(int argc, char* argv[])
{
int n,a,c;
float m[100],s[100],j[100];
float GPA,sum=0,w=0;
scanf("%d\n",&n);
for(a=0;a<n;a++)
{
scanf("%f\n",&s[a]);
w+=s[a];
}
for(a=0;a<n;a++)
{
scanf("%f",&j[a]);
if(j[a]>=90&&j[a]<=100)
{
m[a]=4.0;
}
if(j[a]>=85&&j[a]<=89)
{
m[a]=3.7;
}
if(j[a]>=82&&j[a]<=84)
{
m[a]=3.3;
}
if(j[a]>=78&&j[a]<=81)
{
m[a]=3.0;
}
if(j[a]>=75&&j[a]<=77)
{
m[a]=2.7;
}
if(j[a]>=72&&j[a]<=74)
{
m[a]=2.3;
}
if(j[a]>=68&&j[a]<=71)
{
m[a]=2.0;
}
if(j[a]>=64&&j[a]<=67)
{
m[a]=1.5;
}
if(j[a]>=60&&j[a]<=63)
{
m[a]=1.0;
}
if(j[a]<60)
{
m[a]=0;
}
}
for(c=0;c<n;c++)
{
sum+=m[c]*s[c] ;
}
GPA=sum/w;
printf("%.2f",GPA);
return 0;	
}
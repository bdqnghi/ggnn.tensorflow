int main()
{ 
int n0,i0;
cin>>n0;
for(i0=0;i0<n0;i0++)
{
int time=0,a[100]={0},i,n,s;
cin>>n; 
if(n==0)
{cout<<60<<endl;continue;} 
for (i=0;i<n;i++)
cin>>a[i]; 
for(i=0;i<n;i++)
{  if(a[i]+3*time<60) time++;
   else break;}
if(a[i-1]+3*time<60)
{s=60-3*time;
cout<<s<<endl;
continue; 
} 
if(a[i-1]+3*(time-1)<60)
{ s=60-3*time+a[i-1]+3*time-60;}
else 
{s=60-3*time;}
cout<<s<<endl;            
} 

return 0; 
}

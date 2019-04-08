int main(){
int n,i,j,k,a,b;
struct qj{
 int a,b;
}qj[50000];
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d%d",&(qj[i].a),&(qj[i].b));
}

for(k=1;k<=n;k++)
{
  for(i=0;i<n-k;i++)
  {
	if(qj[i].a>qj[i+1].a)
	{
	  a=qj[i+1].a;
	  qj[i+1].a=qj[i].a;
	  qj[i].a=a;

b=qj[i+1].b;
	  qj[i+1].b=qj[i].b;
	  qj[i].b=b;

	}
  
  }
}

for(i=0;i<=n-2;)
{
  if(qj[i].b>=qj[i+1].a)
  {
    if(qj[i].b<qj[i+1].b)
	
	  qj[i].b=qj[i+1].b;
	
    for(j=i+1;j<n-1;j++)
	{
	  qj[j].a=qj[j+1].a;
	  qj[j].b=qj[j+1].b;
	}
	n--;
  }
  else i++; 
}
	
if(n!=1) printf("no");
else printf("%d %d",qj[0].a,qj[0].b);

return 0;
}


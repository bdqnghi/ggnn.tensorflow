int main()
{
  char c[500];
  gets(c);
  int word[500];
  char a[500][100];
  int i,k=0,m=0;
  word[0]=0;
  for(i=0;c[i]!='\0';i++)
  {
	  if(c[i]!=' '&&c[i]!=',') 
	  {
		  word[k]++;
		  a[k][m]=c[i];
		  m++;
	  }
	  else if(c[i]==' '||c[i]==',') 
	  {k++;m=0;word[k]=0;}
	  
  }

int MAX=0,MIN=0;
int max=word[0];
int min=word[0];
  for(i=1;i<=k;i++)
  {
	  
     
	 if(word[i]>max) {max=word[i];MAX=i;}
	 
  }
  for(i=1;i<=k;i++)
  {
     
	 if(word[i]<min&&word[i]>0) {min=word[i];MIN=i;}
  }
  
  
for(i=0;i<max;i++)
printf("%c",a[MAX][i]);
printf("\n");

for(i=0;i<min;i++)
printf("%c",a[MIN][i]);

  
  
  return 0;
}
//#include<math.h>
/*int  a[100][100],i,n,j;
int f(int i,int j)
{
	if(i==n-1&&j==n-1) return 1;
	else {

*/



void main()
{

	char a[200]={"\0"};
	int b[100]={0},c[100]={0},
		n=0,r=0,d[100]={0},
		i=0,j=0,k=0,max=0,min=180,a1=90,s=0,a2=90,t=0;
  
	gets(a);
  
	t=strlen(a);//????????

  for(i=0;i<t;i++)
  {
	  if(a[i]>='A'&&a[i]<='z'||a[i]>='0'&&a[i]<='9')
          b[j]++;//??????????
	  else if(a[i]!='.') j++;//????????
	  
  }

j++;


  for(k=0;k<j;k++)
  
	  if(b[k]>max)
	  {
		  max=b[k];
	  }
   for(t=0;t<j;t++)
	   if(b[t]==max) 
	   {
		   a1=t;break;
		   //??????????
	   }
	 for(k=0;k<j;k++)
	   if(b[k]<min) 
	  {
		  min=b[k];
	  }
	for(t=0;t<j;t++)
	   if(b[t]==min) 
	   {
		   a2=t;break;
		  
	   }  //???????????
	  


	
	for(t=0;t<a1;t++)
		s+=b[t]+1;
//	printf("%d %d %d",max,b[a1],s);
	for(t=s;t<s+b[a1];t++)
		printf("%c",a[t]);
          printf("\n");//break;



s=0;
	for(t=0;t<a2;t++)
		s+=b[t]+1;
//	printf("%d %d %d ",min,b[a2],s);

		for(t=s;t<s+b[a2];t++)
	printf("%c",a[t]);
	printf("\n");
	//break;



  }


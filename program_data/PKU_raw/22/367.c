char str[1500];
void main()
{
  int l,i,j=0,s=0,k,a[300];
  gets(str);
  l=strlen(str);
  for(i=0;i<l;i++)
  {   
  	if(str[i]==',')  s=0;
  	 else s=s*10+str[i]-'0';
  	  if(str[i+1]==','||i==(l-1)) {a[j]=s;j++;}
  } 
  for(i=0;i<j;i++)
  {
  for(k=i+1;k<j;k++)
  {
  	if(a[i]<a[k])  {s=a[i];a[i]=a[k];a[k]=s;}
  }
  }
   if(a[j-1]==a[0]) printf("No");
   else {for(i=1;i<j;i++)
  {
  	if(a[i]!=a[0]) {printf("%d\n",a[i]);break;}
  	
  	}
  }
}
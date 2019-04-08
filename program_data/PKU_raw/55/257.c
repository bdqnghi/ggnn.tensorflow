int main()
{
 int n,m;
 int i,k,num=0;
 char in[255],out[255]="0";
 char a2[128];
 char a[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 
 for(i=0;i<='9';i++)
  a2[i]=i-'0';
 for(i='a';i<='z';i++)
  a2[i]=i-'a'+10;
 for(i='A';i<='Z';i++)
  a2[i]=i-'A'+10;
 
 scanf("%d%s%d",&n,in,&m);

 for(i=0;in[i]!='\0';i++) 
  num=num*n+a2[in[i]];
 
 if(num==0)
  k=1;
 else k=0;

 while(num>0)
 {  
  out[k]=a[num%m];
  k++;
  num=num/m;
 }

 for(i=k-1;i>=0;i--)
  printf("%c",out[i]);
 printf("\n");
 return 0;
}




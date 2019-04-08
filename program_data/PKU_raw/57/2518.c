void main()
{
int j,k,i=0,n;char text[40];
scanf("%d",&n);
while(i<=n)
{i++;
 gets(text);
 k=strlen(text);
 if((text[k-1]=='r'&&text[k-2]=='e')||(text[k-1]=='y'&&text[k-2]=='l'))  
  text[k-2]='\0';
 else  text[k-3]='\0';
printf("%s\n",text);
}
}

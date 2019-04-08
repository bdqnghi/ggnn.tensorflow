void main()
{ char s1[10],s2[30];
  int i,j,len,max;
  while (scanf("%s%s",s1,s2)!=EOF) 
{ max=0;char s3[30]={'\0'};  
  len=strlen(s1);
  for(i=0;i<len;i++)
{ if(s1[i]>max) j=i,max=s1[i];
} for(i=j+1;i<len;i++)
{ s3[i-j-1]=s1[i],s1[i]='\0';
}
  strcat(s1,s2);
  strcat(s1,s3);
  printf("%s\n",s1); 
}
} 
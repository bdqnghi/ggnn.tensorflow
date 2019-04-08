void main()
{
    char s1[1000],s2[1000];
    int m[1000],n[1000],t,s,a,b,i,j,l1;
    scanf("%d%s%d",&a,s1,&b);
    l1=strlen(s1);
     for(i=0;i<l1;i++)
     {
     	if(s1[l1-1-i]>='0'&&s1[l1-1-i]<='9') m[i]=s1[l1-i-1]-'0';
     	else if(s1[l1-1-i]>='a'&&s1[l1-1-i]<='z') m[i]=s1[l1-i-1]-'a'+10;
     	else if(s1[l1-1-i]>='A'&&s1[l1-1-i]<='Z') m[i]=s1[l1-i-1]-'A'+10;
     }
     t=1;s=0;
        for(i=0;i<l1;i++)
       {s+=m[i]*t;
        t*=a;}//??????
       i=0;
       if(s)
       {
       while(s!=0)
      {
      	n[i]=s%b;
      	s=s/b;
      	i++;
      }
      i--;}
      for(j=i;j>=0;j--)
      {
      	if(n[j]<10) {s2[j]=n[j]+'0';printf("%c",s2[j]);}
      	else {s2[j]=n[j]+'A'-10;printf("%c",s2[j]);}
      	}
       
}


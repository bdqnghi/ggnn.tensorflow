int main(int argc, char* argv[])
{
	char s[N], e[N], b, g;
 int i,k;
 gets(s);
 b = s[0];
 for(i=1;s[i];i++)
 {
	 if(s[i]!=b)
	 {
		 g = s[i];
		 break;
	 }
 }
 for(i=0;s[i];i++)e[i]='\x1';

i=0;
while(s[i])
{if(s[i]==b)i++;
 else{
   for(k=i-1;k>=0;k--)
    if(s[k]==b && e[k])
    {e[k]='\0';
     printf("%d %d\n",k,i);
     break;
     }
   i++;
  }
}
return 0;
}

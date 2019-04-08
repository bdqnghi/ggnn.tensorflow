//#define B '('
//#define G ')'
int main(int argc, char* argv[])
{
	char s[N], e[N], B, G;
 int i,k;
 gets(s);
B = s[0];
 for(i=0;s[i];i++)e[i]='a';

i=0;
while(s[i])
{if(s[i]==B)i++;
 else{
   for(k=i-1;k>=0;k--)
    if(s[k]==B && e[k])
    {e[k]='\0';
     printf("%d %d\n",k,i);
     break;
     }
   i++;
  }
}
puts("\n");
return 0;
}
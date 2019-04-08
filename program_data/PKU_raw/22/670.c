int main()
{
 char t[1501]={'\0'};
 int i,j=1;
 int c=0;
 long a=-100000,b=-100000;
 scanf("%s",t);
 for(i=0;;i++)
    {if(t[i]==','||t[i]=='\0')
	    {if(c>a){b=a;a=c;}
		 if(c<a&&c>b)b=c;
		}
	 if(t[i]==','){c=0;continue;}
     if(t[i]=='\0')break;
     c=c*10+(int)(t[i]-'0');
	}
 if(b==-100000)printf("No");
 else printf("%d",b);
 return 0;
}

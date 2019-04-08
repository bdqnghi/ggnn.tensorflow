int main(){
char s[100],s1[100];
int i,len,t;
	while (cin>>s){
	 memset(s1,' ',sizeof(s1));
	 len=strlen(s);
	 t=0;
	 for (i=0;i<len;i++)
		 {if (s[i]=='(') t++;
		  if (s[i]==')')
		   {if (t>0) t--; else s1[i]='?';}}
	 t=0;
	 for (i=len-1;i>=0;i--)
	    { if (s[i]==')')t++;
	      if (s[i]=='(')
	       {if (t>0) t--; else s1[i]='$';}
	    }
	 for (i=0;i<len;i++) cout<<s[i]; cout<<endl;
	for (i=0;i<len;i++) cout<<s1[i]; cout<<endl;
	    }



	  return 0;
}

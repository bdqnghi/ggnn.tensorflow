char use[150],rem[150];
int len;
void rid(int begin,int end);
int main()
{while(1){
	char s;
	int i=0;
	while((s=cin.get())!='\n'){
		use[i]=s;rem[i]=s;i++;
	}
	len=i-1; //[0]->[len]
	rid(0,len);
	      for(int j=0;j<=len;j++)
		  if(use[j]=='(')
			  use[j]='$';
		  else if(use[j]==')')
			  use[j]='?';
		  else if(use[j]!='?' && use[j]!='$') use[j]=' ';

	for(i=0;i<=len;i++)
		cout<<rem[i];
	cout<<endl;
	for(i=0;i<=len;i++)
		cout<<use[i];
	cout<<endl;
}

	return 0;
}

void rid(int begin,int end)
{ 
  if(begin<=end){
	  if(use[begin]!=')')
		  rid(begin+1,end);
	  else {
		  int i=begin;
		  while(use[i]!='(' && i>=0)i--; //????
		    if(i==-1)
			  {use[begin]='?';rid(begin+1,end);}
			else 
				for(int j=i;j<=begin;j++)
				 {use[j]=' ';rid(begin+1,end);}
	      }
   }
}
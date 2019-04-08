int function(int begin,int end);
char child[110];
char b,g;
int main()
{
	char s;
	int i=0;
	while((s=cin.get())!='\n'){
		child[i]=s;i++;
	 }
	b=child[0];
	for(int j=1;j<=i;j++)
		if(child[j]!=b)
		  {g=child[j];break;}
	    
	function(0,i-1);

	
	return 0;
}

int function(int begin,int end)
{ 
  int rembegin=begin;
  if(begin+1==end) return 0;
  else {
	  while(child[begin+1]==' ') 
       {begin++;}

     if(child[begin+1]==g){
		 int use=rembegin;
		 while(child[use]==' ')
		    use--;
		 for(int j=use;j<=begin+1;j++)
		    child[j]=' ';
       cout<<use<<" "<<begin+1<<endl;
	   //cout<<child<<" "<<begin<<" "<<use<<endl;
       function(rembegin-1,end);
      }
     else function(rembegin+1,end);
  }
}



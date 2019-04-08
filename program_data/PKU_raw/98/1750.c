/*
 * m.cpp
 *
 *  Created on: 2013-12-7
 *      Author: de
 */

char *p=NULL;

int t=0,len=0;
void paiban(char *q,int i){
	if(q[i]==' '){q[i]='\n';
      t+=80;
      if(len-t<=80) {
    	  cout<<p;return;}
      else paiban(q+i+1,79);
	}
	else{
		if(q[i+1]==' '){q[i+1]='\n';
		t+=81;
		if(len-t<=80) {
		    	  cout<<p;return;}
		      else paiban(q+i+2,79);
		}
		else{
		i--;
		while(q[i]!=' '){
			i--;
		}
		q[i]='\n';
		i++;
		t+=i;
		if(len-t<=80){cout<<p;
		return;
		}
		else paiban(q+i,79);
		}
	}
}
int main(){
	int n;
   cin>>n;
  char text[42*n];
  p=text;
   char c[1];
   cin.getline(c,1);
   cin.getline(text,42*n); //cout<<"*********************"<<strlen(text);
   len=strlen(text);
   if(len>80){

   paiban(text,79);
   }
   else
   cout<<text<<endl;

	return 0;
}
char p[200]={'1'},temp[200]={0}; //???????? 

void sq()  //????2 
{int i,j,jinwei=0;
 for(i=0;p[i]!='\0';i++)
   {temp[i]=((p[i]-'0')*2+jinwei)%10+'0'; //??? 
    jinwei=((p[i]-'0')*2+jinwei)/10;      //?? 
    }
 temp[i]=jinwei+'0'; //??? 
 for(i=0;i<200;i++) {p[i]=temp[i];temp[i]=0;} //??????? 
 }


int main() 
{int i,j,n;
 cin>>n;
 for(i=0;i<n;i++)  sq();
 for(i=199;p[i]=='\0'||p[i]=='0';i--); //??????????????? 
 for(;i>=0;i--) cout<<p[i];

 return 0; 
 }
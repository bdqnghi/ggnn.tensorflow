char sentence[1000],word[1000][10];
int num[1000]={1},words,n,Max=0;

void seperate()   //????????n??????????? 
{int i,i1,j=0,k=0;
 for(i=0;sentence[i+n-1]!='\0';i++) 
   {for(i1=0;i1<n;i1++) {word[k][j]=sentence[i+i1];j++;}
    if(j==n) {word[k][n]=='\0';j=0;k++;}
      }
 words=k;
}

void coun() //??????????
{int i,j;
 for(i=0;i<words;i++) if(num[i]!=0) for(j=i+1;j<words;j++) if(strcmp(word[i],word[j])==0) {num[j]=0;num[i]++;}
 for(i=0;i<words;i++) if(num[i]>Max) Max=num[i];  //????? 
     } 

int main()
{int i;
 cin>>n;
 cin>>sentence;
 seperate();
 for(i=0;i<1000;i++) num[i]=1;
 coun();
 if(Max<=1) cout<<"NO"<<endl;
 else{cout<<Max<<endl; for(i=0;i<words;i++) if(num[i]==Max) cout<<word[i]<<endl;}
 return 0;
    }

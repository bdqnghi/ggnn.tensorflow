int k; //???
int mis[30];
int maxL =0;
int curH =100000;
int getNum=0;
int cmp(int a, int b)//????
{
     if(a>b) return 0;
     else return 1;
}


void oneState(int id)
{
     if(id >= k)
     {
          if(getNum>maxL)
			  maxL = getNum;
		  return;
     }

   
    if(mis[id]<=curH)//??
    {    
	   int t =curH;
       curH = mis[id];
       getNum++;

		oneState(id+1);
        
		curH = t;
		getNum--;

	}

    
	oneState(id+1);
        
	}



int main()
{
	cin>>k;
	for(int i=0;i<k;i++)
	{
		cin>>mis[i];
	}
    oneState(0);
	cout<<maxL<<endl;

   return 0;
}
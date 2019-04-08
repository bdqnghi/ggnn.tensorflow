int main()
    {int n;
    cin>>n;//????
    for(;n>=1;n--)
        {int m;
    	cin>>m;//??????????
    	int broke[m+1];//????????????
    	int i,total[61]={0},count=0;
    	for(i=1;i<=60;i++)
    		total[i]=1;//total[61]??1-60?????1???0??
    	if(m==0)cout<<"60"<<endl;//??0?
    	else//????1?
    	   {for(i=1;i<=m;i++)
    		    {cin>>broke[i];//???????i??????
    		    broke[i]=broke[i]+(i-1)*3;//???i??????broke[i]??
    		    }
    	    for(i=1;i<=m;i++)//?????60??????total????0
    	        {if(broke[i]+1<=60)total[broke[i]+1]=0;
    	        else break;
    	        if(broke[i]+2<=60)total[broke[i]+2]=0;
    	         else break;
    	        if(broke[i]+3<=60)total[broke[i]+3]=0;
    	          else break;
    	        }
    	    for(i=1;i<=60;i++)//??????
    	    	count=count+total[i];
    	    cout<<count<<endl;
    	    count=0;//?????
        	for(i=1;i<=60;i++)
        		total[i]=1;
    	   }
        }
    return 0;
    }
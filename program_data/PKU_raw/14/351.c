struct result//??result?????num?????????????
{   int num;
    int chn;
    int math;
    int total;
};
int main()
    {int n,k;
    cin>>n;
    struct result student[n+1];//?result??????student
    for(k=1;k<=n;k++)
        {cin>>student[k].num>>student[k].chn>>student[k].math;//??????
        student[k].total=student[k].chn+student[k].math;//?????
        }
    int i,j;
    struct result temp;
    for(i=1;i<4;i++)
    	for(j=1;j<=n-i;j++)//???????
    	    {if(student[j].total>=student[j+1].total)
    	        {temp=student[j];
    	        student[j]=student[j+1];
    	        student[j+1]=temp;
    	    	}
    	    }
    cout<<student[n].num<<" "<<student[n].total<<endl;
    cout<<student[n-1].num<<" "<<student[n-1].total<<endl;
    cout<<student[n-2].num<<" "<<student[n-2].total<<endl;

    return 0;
    }
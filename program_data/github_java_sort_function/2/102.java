 

public void merge(int[]data, start, end){
    int[]temp=data[data.length];
    int mid = start+ (end-start)/2;
    int leftpos=mid;
    int rightpos=end;
    while (rightpos+leftpos < end){
        if (data[leftpos]<data[rightpos]){
        temp
        }
    }
    }

    public void sort(int [] data){
    sortH(data,0,data.length-1);
    }

    public void sortH(int[]data,int start, int end){
    if (data.length==1){
        return;
    }
    if (start<end){
        int mid= start + (end-start)/2;
        sortH(data,start,mid);
        sortH(data,mid+1,end);
        merge(data,start,mid,mid+1,end);
    }
    }

    public int[] leftHalf(int [] ary){
    int length = ary.length/2;
    int [] temp= new int [length];
    for (int x=0; x<length;x++){
        temp[x]=ary[x];
    }
    return temp;
    }

    public int[] rightHalf(int[]ary){
    int length= ary.length - (ary.length/2);
    int []temp= new int[length];
    for (int x=0; x<length;x++){
        temp[x]= ary[(ary.length/2)+x];
    }
    return temp;
    }

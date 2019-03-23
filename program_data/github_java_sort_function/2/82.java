public static int[] sorting(int[] data, int left, int right) {
    
    if(left<right){
        
        int center=(left+right)/2;
        
        sorting(data,left,center);
        
        sorting(data,center+1,right);
        
        return merge(data,left,center,right);

    }
    return data;
}
public static int[] merge(int[] data, int left, int center, int right) {
    
    int [] tmpArr=new int[data.length];
    int mid=center+1;
    
    int third=left;
    int tmp=left;
    while(left<=center&&mid<=right){

   
        if(data[left]<=data[mid]){
            tmpArr[third++]=data[left++];
        }else{
            tmpArr[third++]=data[mid++];
        }
    }
    
    while(mid<=right){
        tmpArr[third++]=data[mid++];
    }
    while(left<=center){
        tmpArr[third++]=data[left++];
    }
    
    while(tmp<=right){
        data[tmp]=tmpArr[tmp++];
    }
    return data;
    
}

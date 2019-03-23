
import java.util.*;

public class TopKFrequentElements {
    public List<Integer> topKFrequent(int[] nums, int k) {
    	
        Map<Integer, Integer> cnts = new HashMap<Integer, Integer>();
        Map<Integer, List<Integer>> cntLists = new HashMap<Integer, List<Integer>>();
        
        for(int num : nums) {
            int oriCnt = cnts.getOrDefault(num, 0);
            cnts.put(num, oriCnt + 1);
        }
        
        for(int num : cnts.keySet()) {
            int cnt = cnts.get(num);
            if(cntLists.get(cnt) == null) cntLists.put(cnt, new ArrayList<Integer>());
            cntLists.get(cnt).add(num);
        }
        
        List<Integer> res = new ArrayList<Integer>();
        for(int cnt = nums.length; cnt >= 0 && res.size() < k; cnt --)
            
            if(cntLists.containsKey(cnt)) res.addAll(cntLists.get(cnt));
        
        return res;
        
    }
}

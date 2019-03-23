package September;

public class InsertionSortList {
	
    public ListNode insertionSortList(ListNode head) {
        ListNode cur = head.next;
        ListNode p = cur;
        ListNode q = head;
        while( p != null){
        	ListNode t = head;
        	if(t.val > p.val){
        		q.next = p.next;
        		p.next = t;
        		head = p;
            	ListNode tmp = p;
            	p = q;
            	q = tmp;
        	}
        	else{
        		while(t.next.val < p.val)
        			t = t.next;
        		if(t.next != p){
	        		q.next = p.next;
	        		p.next = t.next;
	        		t.next = p;
	            	ListNode tmp = p;
	            	p = q;
	            	q = tmp;
        		}
        	}

        	p = p.next;
        	q = q.next;
        }
        
        
        return head;
    }
	
	
}

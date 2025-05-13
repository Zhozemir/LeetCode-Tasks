package delete_the_middle_node_of_a_linked_list_2095;

public class Middle {

    public class ListNode {
      int val;
      ListNode next;
      ListNode() {}
      ListNode(int val) { this.val = val; }
      ListNode(int val, ListNode next) { this.val = val; this.next = next; }
  }

    public ListNode deleteMiddle(ListNode head){

        if(head == null || head.next == null)
            return null;

        ListNode prev = null;
        ListNode slow = head;
        ListNode fast = head;

        while(fast != null && fast.next != null){

            prev = slow;
            slow = slow.next;
            fast = fast.next.next;

        }

        prev.next = slow.next;
        return head;

    }

     // solution without ListNode prev;

//    public ListNode deleteMiddle(ListNode head) {
//
//        if (head == null || head.next == null) {
//            return null;
//        }
//
//        ListNode slow = head;
//        ListNode fast = head.next.next;
//
//        while (fast != null && fast.next != null) {
//
//            slow = slow.next;
//            fast = fast.next.next;
//
//        }
//
//        slow.next = slow.next.next;
//
//        return head;
//    }
    
}

package remove_nth_node_from_end_of_list_19;

public class NthNode {

    public class ListNode {
        int val;
        ListNode next;
        ListNode() {}
        ListNode(int val) { this.val = val; }
        ListNode(int val, ListNode next) { this.val = val; this.next = next; }
  }

    public ListNode removeNtFromEnd(ListNode head, int n){

        ListNode res = new ListNode(0, head);
        ListNode dummy = res;

        for (int i = 0; i < n; i++)
            head = head.next;

        while(head != null){
            head = head.next;
            dummy = dummy.next;
        }

        dummy.next = dummy.next.next;

        return res.next;

    }

}

/*
Given a list, rotate the list to the right by k places, where k is non-negative.

For example:
Given 1->2->3->4->5->NULL and k = 2,
return 4->5->1->2->3->NULL.
*/

/**

 * Definition for singly-linked list.

 * struct ListNode {

 *     int val;

 *     ListNode *next;

 *     ListNode(int x) : val(x), next(NULL) {}

 * };

 */

class Solution 
{

	public:
	
	ListNode* rotateRight(ListNode* head, int k) 
	{
		if(head == NULL || k == 0)
			return head;
		// get the length of list
		int len = 0;
		ListNode* p = head;
		ListNode* tail;
		while(p != NULL)
		{
			len++;
			tail = p;
			p = p->next;		
		}	

		k = k % len;
		if(k == 0)
			return head;
		p = head;
		for(int i = 1; i < len-k; i++)
			p = p->next;
		tail->next = head;
		head = p->next;
		p->next = NULL;
		return head;						
	}

};

/*
  模拟
*/

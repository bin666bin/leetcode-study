#include <stdio.h>
#include <stdlib.h>
typedef struct ListNode {
      int val;
      struct ListNode *next;
}ListNode;

void insert( ListNode  ** head,int e){
    ListNode *s = (ListNode *) malloc(sizeof (ListNode));
    s->val =e;
    s->next= *head;
    (*head) = s;
}


void modifyValue(int *ptr) {
    // 将指针所指向的内存位置上的值加1
    (*ptr)++;
}

struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* p= head;

    while (head != NULL) {
        while (p->val == val) {
            head = p->next;
            free(p);
        }
    }
    while (p->next!= NULL){
        struct ListNode* j = p->next;
        if(j->val == val ){
            p->next = j->next;
            free(j);
            p=p->next;
        }
        p=p->next;
    }
    return head;
}
int main() {
    int x;
    ListNode  * head = (ListNode  *)malloc(sizeof (ListNode));
    head->next = NULL;
    scanf("%d",&x);
    while(x!=9999){
        insert(&head,x);
        scanf("%d",&x);
    }
    ListNode  * p=head;
    for(int i = 0;i<4;i++){
        printf("%d\n",p->val);
        p=p->next;
    }
    return 0;


}

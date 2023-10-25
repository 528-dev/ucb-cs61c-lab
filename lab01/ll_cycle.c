#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    node *p, *q;
    p = q = head;
    while (q){
        if (q->next) q = q->next->next;
        else return 0;
        p = p->next;
        if (p == q) return 1;
    }
    return 0;
}

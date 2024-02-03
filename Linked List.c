
#include <stdio.h>
#include <malloc.h>

struct node {
    int val;
    struct node *next;
};

void insert(struct node **start, int x) {
    struct node *cur = (struct node*) malloc(sizeof(struct node)), *temp;
    cur->val = x;
    cur->next = NULL;
    if(*start == NULL) {
        *start = cur;
        return;
    }
    temp = *start;
    while(temp->next != NULL) temp = temp->next;
    temp->next = cur;
    return;
}


int remov(struct node **start) {
    if(*start == NULL) {
        puts("Oh,the List is empty! can't delete!");
        return -1;
    }
    int ret = (*start)->val;
    struct node *temp = (*start);
    *start = temp->next;
    free(temp);
    return ret;
}


print(struct node *cur) {
    if(cur == NULL) {
        puts("Oh, the List is empty!");
        return;
    }
    while(cur != NULL) {
        printf("%d\n", cur->val);
        cur = cur->next;
    }
}


int main() {
    struct node *start;
    start = NULL;
    int n, x;
    while(~scanf("%d", &n)) {
        if(n == 1) {
            scanf("%d", &x);
            insert(&start,x);
        }
        else if(n == 2) {
            x = remov(&start);
            if(x != -1) printf("%d has been removed successfully!\n", x);
        }
        else {
            print(start);
        }
    }
    return 0;
}


/**
1 x - Add x at the end of the list
2   - Delete the first element from the list
3   - Print the list
4 x - Report the position of the first occurrence of x
5 x - Add x at the beginning of the list
6 x y - Add x at y-th position of the list
7 x - Delete the first occurrence of x
8   - Delete the last element from the list
9   - Delete the second element from the list
10 x - Report the number at x-th position

3
1 25
3
1 30
3
2
3
1 21
3
1 35
3
2
3
2
3
2
3
2
3


o/p:
3
Oh, the list is empty!
1 25
3
25
1 30
3
25
30
2
25 has been removed successfully
3
30
1 21
3
30
21
1 35
3
30
21
35
2
30 has been removed successfully
3
21
35
2
21 has been removed successfully
3
35
2
35 has been removed successfully
3
Oh, the list is empty!
2
Oh, the list is empty! Cannot delete!
3
*/

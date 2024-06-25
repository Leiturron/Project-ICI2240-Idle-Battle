#ifndef List_h
#define List_h

typedef struct List List;

List * createList(void);

void * firstList(List * list);

void * nextList(List * list);

void * lastList(List * list);

void * prevList(List * list);

void pushFront(List * list, void * data);

void pushBack(List * list, void * data);

void pushCurrent(List * list, void * data);

void * anteriorList(List *list);

void * popFront(List * list);

void * popBack(List * list);

void * popCurrent(List * list);

void list_sortedInsert(List *L, void *data, int (*lower_than)(void *data1, void *data2));

void cleanList(List * list);

int isIn(List * list, void * data);

#endif /* List_h */
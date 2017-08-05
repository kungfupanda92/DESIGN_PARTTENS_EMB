#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

	// /* attributes */
	// int size;
	// int head;
	// int tail;
	// int buffer[QUEUE_SIZE];
	
	// int (*is_full)(queue_t *const me);
	// int (*is_empty)(queue_t *const me);
	// int (*get_size)(queue_t *const me);
	// void (*insert)(queue_t *const me, int k);
	// int (*remove)(queue_t *const me);
/*constructors and destructors*/
void queue_init(queue_t *const me,
	int (*fun_is_full)(queue_t *const me),
	int (*fun_is_empty)(queue_t *const me),
	int (*fun_get_size)(queue_t *const me),
	void (*fun_insert)(queue_t *const me, int k),
	int (*fun_remove)(queue_t *const me))
{
	me->head = 0;
	me->tail = 0;
	me->size = 0;

	me->is_full = fun_is_full;
	me->is_empty = fun_is_empty;
	me->get_size = fun_get_size;
	me->insert = fun_insert;
	me->remove = fun_remove;
}
void queue_cleanup(queue_t *const me)
{
	printf("%s\n", __FUNCTION__);
}

/* operations */
int queue_is_full(queue_t *const me)
{
	return (me->head+1)%QUEUE_SIZE == me->tail;
}
int queue_is_empty(queue_t *const me)
{
	return (me->head == me->tail);
}
int queue_get_size(queue_t *const me)
{
	return me->size;
}

void queue_insert(queue_t *const me, int k)
{
	if (!(me->is_full(me)))
	{
		me->buffer[me->head] = k;
		me->head = (me->head+1) % QUEUE_SIZE;
		++me->size;
	}
}
int queue_remove(queue_t *const me)
{
	int value = -9999; //sential value
	if(!(me->is_empty(me)))
	{ 
		value = me->buffer[me->tail];
		me->tail = (me->tail+1) % QUEUE_SIZE;
		--me->size;
	}
	return value;
}


queue_t* queue_create(void)
{
	queue_t *me = (queue_t *)malloc(sizeof(queue_t));
	if (me != NULL)
	{
		queue_init(me, queue_is_full, queue_is_empty, queue_get_size,
			queue_insert, queue_remove) ;
	}
	return me;
}
void queue_destroy(queue_t *const me)
{
	if(me != NULL)
	{
		queue_cleanup(me);
	}
	free(me);
}
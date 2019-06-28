/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 02:26:07 by jaleman           #+#    #+#             */
/*   Updated: 2018/10/23 02:26:08 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

struct  s_node
{
    void            *content;
    struct s_node   *next;
};
struct  s_queue
{
    struct s_node   *first;
    struct s_node   *last;
};

struct s_queue      *init(void)
{
    struct s_queue  *q = malloc(sizeof(struct s_queue));

    queue->first = NULL;
    queue->last = NULL;
    return (q);
}
void                enqueue(struct s_queue *q, void *c)
{
    struct s_node   *n = malloc(sizeof(struct s_node));

    n->content = c;
    n->next = NULL;
    if (!queue->first)
        queue->first = n;
    if (queue->last)
        queue->last->next = n;
    queue->last = n;
    return ;
}
void                *dequeue(struct s_queue *q)
{
    void            *c = NULL;
    struct s_node   *n = queue->first;

    if (queue->first)
    {
        c = n->content;
        queue->first = n->next;
        queue->last = (queue->first ? queue->last : NULL);
        free(n);
    }
    return (c);
}
void                *peek(struct s_queue *q)
{
    return (queue->first ? queue->first->content : NULL);
}
int                 isEmpty(struct s_queue *q)
{
    return (!queue->first ? 1 : 0);
}

/*

#include <stdio.h>

int main(void)
{
    struct s_queue  *queue = init();
    char            *content[][1] = {
      "Eins",
      "Zwei",
      "Drei",
      "Vier",
      "Funf"
    };

    for (int i = 0; i < 5; i += 1)
    {
        enqueue(queue, *content[i]);
        printf("Content : %s\n", peek(queue));
        printf("Empty   : %s\n", (isEmpty(queue) ? "yes" : "no"));
    }
    for (int i = 5; i > 0; i -= 1)
    {
        dequeue(queue);
        printf("Content : %s\n", peek(queue));
        printf("Empty   : %s\n", (isEmpty(queue) ? "yes" : "no"));
    }
    return (0);
}

*/

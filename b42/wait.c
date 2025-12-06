#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

t_list	*ft_lstnew(void *content)
{
    t_list	*ptr;

    ptr = malloc(sizeof(t_list));
    if (!ptr)
        return (NULL);
    ptr->content = content;
    ptr->next = NULL;
    return (ptr);
}

int main(void)
{
    int value = 42;
    t_list *node = ft_lstnew(&value);
    if (!node)
    {
        perror("ft_lstnew");
        return 1;
    }

    printf("node->content points to %p, value = %d\n", node->content, *(int *)node->content);
    printf("node->next = %p (should be NULL)\n", (void *)node->next);

    free(node);
    return 0;
}
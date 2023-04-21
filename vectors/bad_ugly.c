/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bad_ugly.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece <hece@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 20:30:15 by hece              #+#    #+#             */
/*   Updated: 2023/04/21 20:30:16 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

typedef struct s_string
{
        int                             *this;
        unsigned int    len;
        long int                address;
}                               string;

static inline void
        create_string(struct s_string *object, unsigned int len)
{
        object->this = (int *)malloc(sizeof(int) * len);
        object->len = len;
        object->address = (long int)object->this;
}

static inline void
        restring(struct s_string *object, unsigned int len)
{
        object->this = realloc(object->this, len);
        object->len = len;
        object->address = (long int)object->this;
}

void
        free_string(string *vector)
{
        register int    index;

        index = 0;
        while (index < vector->len)
        {
                free(vector[index].this);
                index++;
        }
        free(vector);
}

static inline int
        ft_atoi(const char *str)
{
        register int    index;
        register int    result;
        register int    sign;

        index = 0;
        sign = 1;
        result = 0;
        while ((str[index] >= 9 && str[index] <= 13) || str[index] == ' ')
                index++;
        if (str[index] == '+' || str[index] == '-')
        {
                if (str[index] == '-')
                        sign *= -1;
                index++;
        }
        while ((str[index] >= '0' && str[index] <= '9') && str[index] != '\0')
        {
                result = ((str[index] - '0') + (result * 10));
                index++;
        }
        return (result * sign);
}

static inline int
        *ft_collect(char *str)
{
        int     *result;

        result = (int *)malloc(sizeof(int));
        *result = ft_atoi(str);
        return (result);
}

static inline size_t
        ft_strlen(const char *str)
{
        size_t  index;

        index = 0;
        while (index[str])
                index++;
        return (index);
}

static inline void
        ft_putstr(char *str)
{
        write(1, str, ft_strlen(str));
}

int
        main(int ac, char const *av[], char const *env[])
{
        register int    index;
        register int    layer;
        string          *vector;

        layer = 0;
        index = 1;
        (void)env;
        vector = (string *)malloc(sizeof(string) * ac - 1);
        create_string(vector, ac -1);
        if (ac > 1)
        {
                while (av[index])
                {
                        vector[layer].this = ft_collect((char *)av[index]);
                        layer++;
                        index++;
                }
                if (vector->len == 4)
                        ft_putstr("AFERİN!!!!\n");
        }
        ft_putstr("Program Sonlandırıldı....\n");
        free_string(vector);
        return (0);
}

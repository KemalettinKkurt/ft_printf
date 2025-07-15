/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkocakur <kkocakur@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 23:40:46 by kkocakur          #+#    #+#             */
/*   Updated: 2025/07/15 04:42:27 by kkocakur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "printf.h"

char *utoa_base(unsigned int n, int base)
{
    char digits[] = "0123456789ABCDEF";
    char *str = malloc(33);
    int i = 32; // sondan başla
    str[i] = '\0';
    if (!str)
        return NULL;

    if (n == 0)
        str[--i] = '0';

    while (n > 0)
    {
        str[--i] = digits[n % base];
        n /= base;
    }

    char *result = ft_strdup(&str[i]);
    free(str);
    return result;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utf16_to_utf8.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 16:27:04 by mburson           #+#    #+#             */
/*   Updated: 2017/01/18 16:27:06 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wchar.h>
#include <libft.h>

unsigned char    *ft_utf_16_8(wchar_t **c)
{
    return (ft_utf_32_8(ft_utf_16_32(c)));
}

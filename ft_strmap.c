/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 19:52:42 by mburson           #+#    #+#             */
/*   Updated: 2016/12/01 19:53:02 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strmap(char *s, char (*f)(char))
{
	unsigned int i;

	i = 0;
	while (s[i])
	{
		s[i] = f(s[i]);
		i++;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:05:58 by jlecorne          #+#    #+#             */
/*   Updated: 2022/11/18 15:20:46 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	tabcounter(const char *s, char c)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	if (c == 0)
		return (1);
	if (s[0] != '\0' && s)
		r++;
	while (s[i++])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			r++;
	}
	return (r);
}

char	**freetab(char **p)
{
	int	i;

	i = 0;
	while (p[i])
	{
		free(p[i]);
		i++;
	}
	free(p[i]);
	free(p);
	return (NULL);
}

char	*filltab(const char *s, char c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	ptr = malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (tabcounter(s, c) + 1));
	if (!tab)
		return (NULL);
	while (*s)
	{
		if ((i == 0 && s[i] != c) || (*s != c && *(s - 1) == c))
		{
			tab[j] = filltab((char *)s, c);
			if (!tab[j])
				return (freetab(tab));
			j++;
			i++;
		}
		s++;
	}
	tab[j] = 0;
	return (tab);
}

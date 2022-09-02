/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egokeri <egokeri@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:50:28 by egokeri           #+#    #+#             */
/*   Updated: 2022/08/31 18:02:27 by egokeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	first_letter;

	first_letter = 'a';
	while (first_letter <= 'z')
	{
		write (1, &first_letter, 1);
		first_letter++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/

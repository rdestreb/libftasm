/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfts.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/03 12:28:34 by rdestreb          #+#    #+#             */
/*   Updated: 2015/06/04 13:23:32 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTS_H
# define LIBFTS_H

int 	ft_isalpha(char c);
int 	ft_isdigit(char c);
int 	ft_isalnum(char c);
int 	ft_isascii(char c);
int 	ft_isprint(char c);
int 	ft_tolower(int c);
int 	ft_toupper(int c);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);

#endif

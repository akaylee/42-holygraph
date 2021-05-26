/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaz <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/10/04 11:43:01 by zaz               #+#    #+#             */
/*   Updated: 2014/01/09 03:35:19 by zaz              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op.h"

t_op    op_tab[17] =
{
	{"", 0, 0, 0, 0, 0, 0, {0}},
	{"live", 1, 1, 10, "alive", 0, 0, {PARAM_DIRECT}},
	{"ld", 2, 2, 5, "load", 1, 0, {PARAM_DIRECT | PARAM_INDIRECT, PARAM_REGISTER}},
	{"st", 2, 3, 5, "store",1, 0, {PARAM_REGISTER, PARAM_INDIRECT | PARAM_REGISTER}} ,
	{"add", 3, 4, 10, "addition", 1, 0, {PARAM_REGISTER, PARAM_REGISTER, PARAM_REGISTER}},
	{"sub", 3, 5, 10, "soustraction", 1, 0, {PARAM_REGISTER, PARAM_REGISTER, PARAM_REGISTER}},
	{"and", 3, 6, 6, "et (and  r1, r2, r3   r1&r2 -> r3", 1, 0, {PARAM_REGISTER | PARAM_DIRECT | PARAM_INDIRECT, PARAM_REGISTER | PARAM_INDIRECT | PARAM_DIRECT, PARAM_REGISTER}},
	{"or", 3, 7, 6, "ou  (or   r1, r2, r3   r1 | r2 -> r3", 1, 0, {PARAM_REGISTER | PARAM_INDIRECT | PARAM_DIRECT, PARAM_REGISTER | PARAM_INDIRECT | PARAM_DIRECT, PARAM_REGISTER}},
	{"xor", 3, 8, 6, "ou (xor  r1, r2, r3   r1^r2 -> r3", 1, 0, {PARAM_REGISTER | PARAM_INDIRECT | PARAM_DIRECT, PARAM_REGISTER | PARAM_INDIRECT | PARAM_DIRECT, PARAM_REGISTER}},
	{"zjmp", 1, 9, 20, "jump if zero", 0, 1, {PARAM_DIRECT}},
	{"ldi", 3, 10, 25, "load index", 1, 1, {PARAM_REGISTER | PARAM_DIRECT | PARAM_INDIRECT, PARAM_DIRECT | PARAM_REGISTER, PARAM_REGISTER}},
	{"sti", 3, 11, 25, "store index", 1, 1, {PARAM_REGISTER, PARAM_REGISTER | PARAM_DIRECT | PARAM_INDIRECT, PARAM_DIRECT | PARAM_REGISTER}},
	{"fork", 1, 12, 800, "fork", 0, 1, {PARAM_DIRECT}},
	{"lld", 2, 13, 10, "long load", 1, 0, {PARAM_DIRECT | PARAM_INDIRECT, PARAM_REGISTER}},
	{"lldi", 3, 14, 50, "long load index", 1, 1, {PARAM_REGISTER | PARAM_DIRECT | PARAM_INDIRECT, PARAM_DIRECT | PARAM_REGISTER, PARAM_REGISTER}},
	{"lfork", 1, 15, 1000, "long fork", 0, 1, {PARAM_DIRECT}},
	{"aff", 1, 16, 2, "aff", 1, 0, {PARAM_REGISTER}},
};

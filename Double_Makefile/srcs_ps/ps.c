/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timotheein <timotheein@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 22:37:57 by timotheein        #+#    #+#             */
/*   Updated: 2021/04/29 23:47:21 by timotheein       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int Error_arguments(void)
{
    printf("Error argument\n");
    return (0);
}

int Error_instruction(void)
{
    printf("Error instruction\n");
    return (0);
}
int Error_execution(void)
{
    printf("Error execution\n");
    return (0);
}
int Error_basic(void)
{
    printf("basic Error\n");
    return (0);
}

int main(int ac, char **av)
{
    t_all *all;

    printf("Puwsh swap fuck\n");
    all = 0;
    if (!(all = malloc(sizeof(t_all))) || !intitialize_all(all))
        return (Error_basic());
    all->p_s = 1;
    if (ac < 2)
        return (0);
    if (!check_n_get_arguments(ac, av, all))
        return (Error_arguments()); //need to free the lists
    print_elt(all);
    printf("end of init\n");
    while (!check_order_sk_a(all))
    {
        find_lowest_value_a(all);
        if (all->p_low <= ((all->len_a) / 2))
            send_to_top(all);
        else
            reverse_send_to_top(all);
        if (!check_order_sk_a(all))
            pb(all);
    }
    while (all->sk_b)//sends back slack b elements to a
        pa(all);

}

// int main(int ac, char **av)
// {

//     while (is_not_in_order(all->sk_a))
//     {
//         lowest = find_lowest_value(all->sk_a);
//         if (is_second_half(lowest))
//             reverse_send_to_top(lowest, all);
//         else
//             send_to_top(lowest, all);
//         send_top_to_sk_b(all);
//     }
//     while (is_not_empty(all->sk_b))
//     {
//         send_top_to_sk_a(all);
//     }
// }
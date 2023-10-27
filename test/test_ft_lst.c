/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:21:08 by danbarbo          #+#    #+#             */
/*   Updated: 2023/10/27 20:08:12 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minunit.h"
#include "libft.h"

MU_TEST(test_lst_lstsize)
{
	//ARRANGE
	char	input = 'A';
	int		expected_result = 1;
	int		actual_result;

	//ACT
	actual_result = ft_(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft__test_suite)
{
	MU_RUN_TEST(test__receiving__returns_);
}

int main(int argc, char *argv[]) {
	(void) argc;
	(void) argv;
	MU_RUN_SUITE(ft__test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}

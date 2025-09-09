/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:17:44 by tlize             #+#    #+#             */
/*   Updated: 2025/09/09 17:47:29 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

int Account::checkAmount(void) const
{
    return (this->_amount);
}


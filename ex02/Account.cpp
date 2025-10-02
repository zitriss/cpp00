/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:17:44 by tlize             #+#    #+#             */
/*   Updated: 2025/10/02 18:03:55 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void    Account::_displayTimestamp()
{
    std::time_t now = std::time(NULL);
    std::tm*    tm = std::localtime(&now);
    char        buffer[20];
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", tm);
    std::cout << buffer;
}

Account::Account(int initial_deposit)
{
    _amount = initial_deposit;
    _accountIndex = _nbAccounts++;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _totalAmount += _amount;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account()
{
    Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int     Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int     Account::getTotalAmount(void)
{
    return (_totalAmount);
}

int     Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int     Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

int     Account::checkAmount(void) const
{
    return (this->_amount);
}

void	Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void    Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";p_amount:" << _amount
			  << ";deposit:" << deposit;
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << ";amount:" << _amount
			  << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool    Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";p_amount:" << _amount
			  << ";withdrawal:";
	if (_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return false;
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout << withdrawal
			  << ";amount:" << _amount
			  << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return true;
}

void    Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
			  << ";total:" << getTotalAmount()
			  << ";deposits:" << getNbDeposits()
			  << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

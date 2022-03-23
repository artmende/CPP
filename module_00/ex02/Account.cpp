/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 06:46:18 by artmende          #+#    #+#             */
/*   Updated: 2022/03/23 12:58:55 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

Account::Account(int initial_deposit) :
_accountIndex(_nbAccounts),
_amount(initial_deposit),
_nbDeposits(0),
_nbWithdrawals(0)
{
	Account::_nbAccounts++;
	Account::_totalAmount+=initial_deposit;
	Account::_displayTimestamp();
	std::cout << " index:";
	std::cout << this->_accountIndex;
	std::cout << ";amount:";
	std::cout << this->checkAmount();
	std::cout << ";created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << " index:";
	std::cout << this->_accountIndex;
	std::cout << ";amount:";
	std::cout << this->checkAmount();
	std::cout << ";closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << " accounts:";
	std::cout << Account::getNbAccounts();
	std::cout << ";total:";
	std::cout << Account::getTotalAmount();
	std::cout << ";deposits:";
	std::cout << Account::getNbDeposits();
	std::cout << ";withdrawals:";
	std::cout << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << " index:";
	std::cout << this->_accountIndex;
	std::cout << ";p_amount:";
	std::cout << this->checkAmount();

	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;

	std::cout << ";deposit:";
	std::cout << deposit;
	std::cout << ";amount:";
	std::cout << this->checkAmount();
	std::cout << ";nb_deposits:";
	std::cout << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << " index:";
	std::cout << this->_accountIndex;
	std::cout << ";p_amount:";
	std::cout << this->checkAmount();

	if (this->_amount < withdrawal)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		std::cout << ";withdrawal:";
		std::cout << withdrawal;
		std::cout << ";amount:";
		std::cout << this->checkAmount();
		std::cout << ";nb_withdrawals:";
		std::cout << this->_nbWithdrawals << std::endl;
		return (true);
	}
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << " index:";
	std::cout << this->_accountIndex;
	std::cout << ";amount:";
	std::cout << this->checkAmount();
	std::cout << ";deposits:";
	std::cout << this->_nbDeposits;
	std::cout << ";withdrawals:";
	std::cout << this->_nbWithdrawals << std::endl;
}

int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	time_t now = time(0);
	tm	*ltm = localtime(&now);

	std::cout << "[" << (ltm->tm_year + 1900);
	if (ltm->tm_mon + 1 < 10)
		std::cout << "0";
	std::cout << ltm->tm_mon + 1;
	if (ltm->tm_mday < 10)
		std::cout << "0";
	std::cout << ltm->tm_mday << "_";
	if (ltm->tm_hour < 10)
		std::cout << "0";
	std::cout << ltm->tm_hour;
	if (ltm->tm_min < 10)
		std::cout << "0";
	std::cout << ltm->tm_min;
	if (ltm->tm_sec < 10)
		std::cout << "0";
	std::cout << ltm->tm_sec << "]";

//	std::cout << "[19920104_091532]";
}


